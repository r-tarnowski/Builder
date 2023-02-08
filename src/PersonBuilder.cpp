#include "PersonBuilder.h"
#include "PersonAddressBuilder.h"
#include "PersonJobBuilder.h"

PersonAddressBuilder PersonBuilderBase::lives() const {
   std::cout << "PersonBuilderBase::lives() called" << std::endl;
   return PersonAddressBuilder{ person };
}

PersonJobBuilder PersonBuilderBase::works() const {
   std::cout << "PersonBuilderBase::works() called" << std::endl;
   return PersonJobBuilder{ person };
}
