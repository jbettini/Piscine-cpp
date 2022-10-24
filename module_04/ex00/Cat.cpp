/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 23:53:55 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/25 00:22:10 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {    
    std::cout << "Cat default constructor called !" << std::endl;
    this->type = "Cat";
}

Cat::Cat(std::string t) { 
    std::cout << "Cat constructor with argument called !" << std::endl;
    this->type = t;
}

Cat::Cat(Cat const & src) {
    std::cout << "Cat copy constructor called !" << std::endl;
    *this = src;
}

Cat::~Cat(void) { 
    std::cout << "Cat Destructor of " << this->type << " called !" << std::endl;
}

Cat & Cat::operator=(Cat const & rhs) {
    this->type = rhs.type;
    return *this;
}

void    Cat::makeSound(void) const {
    std::cout << "Miaouuuu" << std::endl;
}

std::string Cat::getType(void) const {
    return (this->type);
}