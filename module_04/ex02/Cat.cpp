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
    this->_b = new Brain("Miaouuuu");
}

Cat::Cat(std::string t) { 
    std::cout << "Cat constructor with argument called !" << std::endl;
    this->type = t;
    this->_b = new Brain("Miaouuuu");
}

Cat::Cat(Cat const & src) {
    std::cout << "Cat copy constructor called !" << std::endl;
    *this = src;
}

Cat::~Cat(void) { 
    std::cout << "Cat Destructor of " << this->type << " called !" << std::endl;
    delete this->_b;
}

Cat & Cat::operator=(Cat const & rhs) {
    this->type = rhs.type;
     delete this->_b;
    this->_b = new Brain("Miaouuuu");
    for(int i = 0; i < 100 ; i++)
        this->_b[i] = rhs._b[i];
    return *this;
}

void    Cat::makeSound(void) const {
    std::cout << "Miaouuuu" << std::endl;
}

std::string Cat::getType(void) const {
    return (this->type);
}