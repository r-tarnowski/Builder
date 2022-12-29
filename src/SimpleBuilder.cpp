#include <iostream>
#include <boost/lexical_cast.hpp>

#include <HtmlElement.h>

using std::cout;
using std::endl;

void printHeader() {
   cout << endl;
   cout << "================================================" << endl;
   cout << "Design Patterns in Modern C++ by Dmitri Nesteruk" << endl;
   cout << "Builder, simple builder                          "<< endl;
   cout << "================================================" << endl;
   cout << endl;
}

/*
void noBuilder() {
    std::string words[] = { "witaj", "świecie" };
    std::ostringstream oss;
    oss << "<ul>";
    for ( auto word : words ) {
        oss << "<li>" << word << "</li>";
    }
    oss << "</ul>";
    //printf( oss.str().c_str() );
    cout << oss.str().c_str() << endl;
}

void oopElementsList() {
   std::string words[] = { "witaj", "świecie" };
   HtmlElement list{"ul", ""};
   for ( auto w: words) {
      list.elements.emplace_back(HtmlElement{"li", w});
   }
   //printf(list.str().c_str());
   cout << list.str().c_str() << endl;
}
*/

struct HtmlSimpleBuilder {
   HtmlElement root;
   HtmlSimpleBuilder( const std::string root_name ) { root.name = root_name; }

   void add_child( const std::string child_name, const std::string child_text ) {
      HtmlElement e( child_name, child_text );
      root.elements.emplace_back( e );
   }

   std::string str() { return root.str(); }
};

int main(int argc, char *argv[]) {
   printHeader();

   HtmlSimpleBuilder builder{ "ul" };
   builder.add_child( "li", "witaj");
   builder.add_child( "li", "świecie");
   cout << builder.str();
   
   cout << endl;
   return 0;
}
