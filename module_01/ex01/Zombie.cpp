/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 04:49:16 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/05 04:55:19 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
       std::cout << "A new Zombie has been born !!!" << std::endl;
};

Zombie::~Zombie(void) {
       std::cout << this->_name << ": is died by a shotgun blast !" << std::endl;
};

void    Zombie::annouce(void) const {

    std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setname(std::string name) {

    this->_name = name;
}