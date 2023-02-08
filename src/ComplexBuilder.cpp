#include <iostream>
#include <vector>

#include <PersonAddressBuilder.h>
#include <PersonJobBuilder.h>

using std::cout;
using std::endl;

void printHeader() {
   cout << endl;
   cout << "================================================" << endl;
   cout << "Design Patterns in Modern C++ by Dmitri Nesteruk" << endl;
   cout << "Builder, Complex Builder                         "<< endl;
   cout << "================================================" << endl;
   cout << endl;
}

int main(int argc, char *argv[]) {
   printHeader();
   cout << endl;

   Person p = Person::create().lives().at("Aleja Gdańska 123").with_postcode("82-200").in("Gdańsk")
                              .works().at("BambuSoft").as_a("analityk").earning(15000);

   cout << p << endl;

   std::cout << argv[0] << " - end" << std::endl;

   return 0;
}