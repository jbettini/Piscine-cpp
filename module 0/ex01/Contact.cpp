#include "PhoneBook.hpp"

void Contact::init_contact(void) {

    do {
        std::cout << "First Name : ";
        if (!getline(std::cin, Contact::FirstName))
            exit(0);
    } while (Contact::FirstName.find_first_not_of(' ') == std::string::npos);

    do {
        std::cout << "Last Name : ";
        if (!getline(std::cin, Contact::LastName))
            exit(0);
    } while (Contact::LastName.find_first_not_of(' ') == std::string::npos);

    do {
        std::cout << "NickName : ";
        if (!getline(std::cin, Contact::NickName))
            exit(0);
    } while (Contact::NickName.find_first_not_of(' ') == std::string::npos);

    do {
        std::cout << "Phone Number : ";
        if (!getline(std::cin, Contact::PhoneNumber))
            exit(0);
    } while (Contact::PhoneNumber.find_first_not_of(' ') == std::string::npos);

    do {
        std::cout << "Darkest Secret : ";
        if (!getline(std::cin, Contact::DarkestSecret))
            exit(0);
    } while (Contact::DarkestSecret.find_first_not_of(' ') == std::string::npos);

    
}

Contact::Contact (void) {};
Contact::~Contact (void) {};