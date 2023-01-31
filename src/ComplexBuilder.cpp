#include <iostream>
#include <vector>

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

class Person {
   std::string street_address;
   std::string post_code;
   std::string city;
   std::string company_name;
   std::string position;
   int annual_income = 0;
   
   Person() {}
};

int main(int argc, char *argv[]) {
   printHeader();
   cout << endl;
   return 0;
}