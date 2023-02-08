#include "Person.h"
#include "PersonBuilder.h"

PersonBuilder Person::create() {
  std::cout << "Person::create() called" << std::endl;
  return PersonBuilder{};
}