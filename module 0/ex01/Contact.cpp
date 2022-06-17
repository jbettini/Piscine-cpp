/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 06:06:24 by jbettini          #+#    #+#             */
/*   Updated: 2022/06/17 06:06:26 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    Contact::print_private_var(int i) const {

    std::cout << "|" << std::setfill(' ') << std::setw(10) << i + 1;
    std::cout << "|" << std::setfill(' ') << std::setw(10) << ((int)Contact::FirstName.size() > 10 ? Contact::FirstName.substr(0, 9) + "." : this->FirstName);
    std::cout << "|" << std::setfill(' ') << std::setw(10) << ((int)Contact::LastName.size() > 10 ? Contact::LastName.substr(0, 9) + "." : this->LastName);
    std::cout << "|" << std::setfill(' ') << std::setw(10) << ((int)Contact::NickName.size() > 10 ? Contact::NickName.substr(0, 9) + "." : this->NickName);
    std::cout << "|" << std::endl;

}

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

void Contact::print_private_contact(void) const {

    std::cout << "First Name : " << this->FirstName << std::endl;
    std::cout << "Last Name : " << this->LastName << std::endl;
    std::cout << "Nick Name : " << this->NickName << std::endl;
    std::cout << "Phone Number : " << this->PhoneNumber << std::endl;
    std::cout << "Darkest Secret : " << this->DarkestSecret << std::endl;
}

Contact::Contact (void) {};
Contact::~Contact (void) {};