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
    : person{ person }
  {
  }
public:
  operator Person() const
  {
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
  PersonBuilder(): PersonBuilderBase{p}
  {
  }

};

#endif
