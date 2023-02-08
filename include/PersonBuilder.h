#ifndef PERSON_BUILDER_H
#define PERSON_BUILDER_H

#include "Person.h"

class PersonAddressBuilder;
class PersonJobBuilder;

class PersonBuilderBase
{
protected:
  Person& person;
  explicit PersonBuilderBase(Person& person)
    : person{ person } {
     std::cout << "PersonBuilderBase(Person& person: " << person << ") called" << std::endl;
  }
public:

   virtual ~PersonBuilderBase() {
      std::cout << "~PersonBuilderBase() called" << std::endl;
  }

  operator Person() const {
    return std::move(person);
  }

  // pomocniczy budowniczowie

  PersonAddressBuilder lives() const;
  PersonJobBuilder works() const;
};

class PersonBuilder : public PersonBuilderBase
{
  Person p;
public:
  PersonBuilder(): PersonBuilderBase{p} {
     std::cout << "PersonBuilder() called" << std::endl;
  }

  virtual ~PersonBuilder() {
     std::cout << "~PersonBuilder() called" << std::endl;
  }

};

#endif
