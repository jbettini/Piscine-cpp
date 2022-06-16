#include "PhoneBook.hpp"

void    PhoneBook::add_contact(int i) {

    this->ContactList[i].init_contact();

}

PhoneBook::PhoneBook(){};
PhoneBook::~PhoneBook(){};
