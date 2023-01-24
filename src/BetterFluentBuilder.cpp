#include <iostream>

#include <BetterHtmlElement.h>

using std::cout;
using std::endl;

void printHeader() {
   cout << endl;
   cout << "================================================" << endl;
   cout << "Design Patterns in Modern C++ by Dmitri Nesteruk" << endl;
   cout << "Builder, better fluent builder                   "<< endl;
   cout << "================================================" << endl;
   cout << endl;
}



struct BetterHtmlFluentBuilder {
   BetterHtmlElement root;
   BetterHtmlFluentBuilder( const std::string root_name ) { root.name = root_name; }

   BetterHtmlFluentBuilder & add_child( const std::string child_name, const std::string child_text ) {
      BetterHtmlElement e( child_name, child_text );
      root.elements.emplace_back( e );
      return * this;
   }

   std::string str() { return root.str(); }
};

int main(int argc, char *argv[]) {
   printHeader();

   BetterHtmlFluentBuilder builder{ "ul" };
   builder.add_child( "li", "witaj").add_child( "li", "świecie");
   cout << builder.str();

   cout << endl;
   return 0;
}
