#ifndef PERSON_ADDRESS_BUILDER_H
#define PERSON_ADDRESS_BUILDER_H

#include <string>

#include <PersonBuilder.h>

class PersonAddressBuilder : public PersonBuilderBase
{
public:
  explicit PersonAddressBuilder(Person& person)
  : PersonBuilderBase{person} {
     std::cout << "PersonAddressBuilder(Person& person: " << person << ") called" << std::endl;
  }

   virtual ~PersonAddressBuilder() {
      std::cout << "~PersonAddressBuilder() called" << std::endl;
   }

   PersonAddressBuilder & at(std::string street_address) {
    std::cout << "PersonAddressBuilder::at(" << street_address << ") called" << std::endl;
    person.street_address = street_address;
    return *this;
  }

   PersonAddressBuilder & with_postcode(std::string post_code) {
      std::cout << "PersonAddressBuilder::with_postcode(" << post_code << ") called" << std::endl;
      person.post_code = post_code;
      return *this;
  }

   PersonAddressBuilder & in(std::string city) {
      std::cout << "PersonAddressBuilder::in(" << city << ") called" << std::endl;
      person.city = city;
      return *this;
  }
};

#endif
