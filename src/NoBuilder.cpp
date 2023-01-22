#include <iostream>
#include <fstream>
//#include <boost/lexical_cast.hpp>

#include <HtmlElement.h>

using std::cout;
using std::endl;

void printHeader() {
   cout << endl;
   cout << "================================================" << endl;
   cout << "Design Patterns in Modern C++ by Dmitri Nesteruk" << endl;
   cout << "Builder, raw version, no builder                 "<< endl;
   cout << "================================================" << endl;
   cout << endl;
}

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

int main(int argc, char *argv[]) {
   printHeader();

   cout << ">>> Calling noBuilder():" << endl;
   noBuilder();

   cout << ">>> Calling oopElementsList():" << endl;
   oopElementsList();

   cout << endl;
   return 0;
}
