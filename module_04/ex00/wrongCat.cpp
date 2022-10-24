/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 23:53:55 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/25 00:22:10 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongCat.hpp"

wrongCat::wrongCat(void) {    
    std::cout << "wrongCat default constructor called !" << std::endl;
    this->type = "wrongCat";
}

wrongCat::wrongCat(std::string t) { 
    std::cout << "wrongCat constructor with argument called !" << std::endl;
    this->type = t;
}

wrongCat::wrongCat(wrongCat const & src) {
    std::cout << "wrongCat copy constructor called !" << std::endl;
    *this = src;
}

wrongCat::~wrongCat(void) { 
    std::cout << "wrongCat Destructor of " << this->type << " called !" << std::endl;
}

wrongCat & wrongCat::operator=(wrongCat const & rhs) {
    this->type = rhs.type;
    return *this;
}

void    wrongCat::makeSound(void) const {
    std::cout << "Miaouuuu" << std::endl;
}

std::string wrongCat::getType(void) const {
    return (this->type);
}