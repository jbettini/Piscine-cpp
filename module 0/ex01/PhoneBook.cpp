#include "PhoneBook.hpp"

# define SPACE ' '

void    PhoneBook::add_contact(int i) {

    this->ContactList[i].init_contact();

}

void    PhoneBook::print_contact(void) const {

    int i = -1;

    while (i < 8)
    {
        if (i == -1)
        {
            std::cout << "|" << std::setfill(SPACE) << std::setw(10) << "INDEX";
            std::cout << "|" << std::setfill(SPACE) << std::setw(10) << "FIRSTNAME";
            std::cout << "|" << std::setfill(SPACE) << std::setw(10) << "LASTNAME";
            std::cout << "|" << std::setfill(SPACE) << std::setw(10) << "NICKNAME";
            std::cout << "|" << std::endl;

        }
        else
            this->ContactList[i].print_private_var(i);
        i++;
    }
}

PhoneBook::PhoneBook(){};
PhoneBook::~PhoneBook(){};
