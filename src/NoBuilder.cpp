#include <iostream>
#include <vector>
#include <fstream>
#include <boost/lexical_cast.hpp>


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
        oss << " <li>" << word << "</li>";
    }
    oss << "</ul>";
    printf( oss.str().c_str() );
}

int main(int argc, char *argv[]) {
   printHeader();

   noBuilder();

   cout << endl;
   return 0;
}
