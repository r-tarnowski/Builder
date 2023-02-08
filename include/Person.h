#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class PersonBuilder;

class Person
{
  // adres
  std::string street_address, post_code, city;

  // informacje o zatrudnieniu
  std::string company_name, position;
  int annual_income = 0;

  Person()
  {
    std::cout << "Utworzono obiekt Person\n";
  }
  
public:
  ~Person() {
    std::cout << "Zniszczono obiekt Person\n";
  }

  static PersonBuilder create();

  Person(Person&& other)
    : street_address{move(other.street_address)},
      post_code{move(other.post_code)},
      city{move(other.city)},
      company_name{move(other.company_name)},
      position{move(other.position)},
      annual_income{other.annual_income}
  {
     std::cout << "Person(Person&& other: " << other << ") called" << std::endl;
  }

  Person& operator=(Person&& other) {

    std::cout << "operator=(Person&& other: " << other << ") called" << std::endl;

    if (this == &other) {
       return *this;
    }

    street_address = move(other.street_address);
    post_code = move(other.post_code);
    city = move(other.city);
    company_name = move(other.company_name);
    position = move(other.position);
    annual_income = other.annual_income;
    return *this;
  }

  friend std::ostream& operator<<(std::ostream& os, const Person& obj)
  {
    return os
      << "ulica i numer: " << obj.street_address
      << " kod pocztowy: " << obj.post_code
      << " miasto: " << obj.city
      << " nazwa firmy: " << obj.company_name
      << " stanowisko: " << obj.position
      << " roczny dochód: " << obj.annual_income;
  }

  friend class PersonBuilder;
  friend class PersonAddressBuilder;
  friend class PersonJobBuilder;
};

#endif