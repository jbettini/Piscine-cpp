/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 23:53:55 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/25 00:58:38 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("animal") {    
    std::cout << "Animal default constructor called !" << std::endl;
}

Animal::Animal(std::string t) : type(t) { 
    std::cout << "Animal constructor with argument called !" << std::endl;
}

Animal::Animal(Animal const & src) {
    std::cout << "Animal copy constructor called !" << std::endl;
    *this = src;
}

Animal::~Animal(void) { 
    std::cout << "Animal Destructor of " << this->type << " called !" << std::endl;
}

Animal & Animal::operator=(Animal const & rhs) {
    this->type = rhs.type;
    return *this;
}

void    Animal::makeSound(void) const {
    std::cout << this->type << " make a sound ??" << std::endl;
}

std::string Animal::getType(void) const {
    return (this->type);
}