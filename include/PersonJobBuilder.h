#ifndef PERSON_JOB_BUILDER_H
#define PERSON_JOB_BUILDER_H

#include "PersonBuilder.h"

class PersonJobBuilder : public PersonBuilderBase {
public:
  explicit PersonJobBuilder(Person& person)
  : PersonBuilderBase { person } {
     std::cout << "PersonJobBuilder(Person& person: " << person << ") called" << std::endl;
  }

   virtual ~PersonJobBuilder() {
      std::cout << "~PersonJobBuilder() called" << std::endl;
   }

   PersonJobBuilder & at(std::string company_name) {
      std::cout << "PersonJobBuilder::at(" << company_name << ") called" << std::endl;
      person.company_name = company_name;
      return *this;
  }

   PersonJobBuilder & as_a(std::string position) {
      std::cout << "PersonJobBuilder::as_a(" << position << ") called" << std::endl;
      person.position = position;
      return *this;
  }

   PersonJobBuilder & earning(int annual_income) {
      std::cout << "PersonJobBuilder::earning(" << annual_income << ") called" << std::endl;
      person.annual_income = annual_income;
      return *this;
  }
};

#endif
