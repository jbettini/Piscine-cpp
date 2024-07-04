/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 06:06:20 by jbettini          #+#    #+#             */
/*   Updated: 2022/06/17 06:06:43 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

# define SPACE ' '

bool is_digits(const std::string &str)
{
    if (str.find_first_not_of("0123456789") == std::string::npos)
        return (1);
    return (0);
}


void    PhoneBook::add_contact(int i) {

    this->ContactList[i].init_contact();
    if (this->_number_of_contact < 8)
        this->_number_of_contact += 1;
}

void    PhoneBook::get_user_output(int i) const {
    
    this->ContactList[i].print_private_contact(); 
}

void    PhoneBook::search_contact(void) const{

    int         i = 8;
    std::string user_output;


    this->print_contact();
    do {
        std::cout << "Which contact do you search : ";
        if (!getline(std::cin, user_output))
            exit(0);
        else if (is_digits(user_output) && user_output.length() == 1)
        {
            std::stringstream ss(user_output);
            ss >> i;
        }
    } while (i > this->_number_of_contact || i <= 0);
    this->get_user_output(i - 1);
}

void    PhoneBook::print_contact(void) const {

    int i = -1;

    while (i < this->_number_of_contact)
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

PhoneBook::PhoneBook() {};
PhoneBook::~PhoneBook(){};
int   PhoneBook::_number_of_contact = 0;