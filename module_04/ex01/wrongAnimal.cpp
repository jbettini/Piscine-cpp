/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 23:53:55 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/25 00:22:10 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongAnimal.hpp"

wrongAnimal::wrongAnimal(void) : type("wrongAnimal") {    
    std::cout << "wrongAnimal default constructor called !" << std::endl;
}

wrongAnimal::wrongAnimal(std::string t) : type(t) { 
    std::cout << "wrongAnimal constructor with argument called !" << std::endl;
}

wrongAnimal::wrongAnimal(wrongAnimal const & src) {
    std::cout << "wrongAnimal copy constructor called !" << std::endl;
    *this = src;
}

wrongAnimal::~wrongAnimal(void) { 
    std::cout << "wrongAnimal Destructor of " << this->type << " called !" << std::endl;
}

wrongAnimal & wrongAnimal::operator=(wrongAnimal const & rhs) {
    this->type = rhs.type;
    return *this;
}

void    wrongAnimal::makeSound(void) const{
    std::cout << this->type << " make a sound ??" << std::endl;
}

std::string wrongAnimal::getType(void) const{
    return (this->type);
}