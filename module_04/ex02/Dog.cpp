/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 23:53:55 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/25 00:22:10 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {    
    std::cout << "Dog default constructor called !" << std::endl;
    this->type = "Dog";
    this->_b = new Brain("Wafffff");
}

Dog::Dog(std::string t) { 
    std::cout << "Dog constructor with argument called !" << std::endl;
    this->type = t;
    this->_b = new Brain("Wafffff");
}

Dog::Dog(Dog const & src) {
    std::cout << "Dog copy constructor called !" << std::endl;
    *this = src;
}

Dog::~Dog(void) { 
    std::cout << "Dog Destructor of " << this->type << " called !" << std::endl;
    delete this->_b;
}

Dog & Dog::operator=(Dog const & rhs) {
    this->type = rhs.type;
    delete this->_b;
    this->_b = new Brain("Wafffff");
    for(int i = 0; i < 100 ; i++)
        this->_b[i] = rhs._b[i];
    return *this;
}

void    Dog::makeSound(void) const{
    std::cout << "Waffff" << std::endl;
}

std::string Dog::getType(void) const{
    return (this->type);
}