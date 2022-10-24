/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 04:08:20 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/25 00:54:01 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name){};
HumanB::~HumanB(void) {};

void    HumanB::attack(void) {

        std::cout << this->_name + " attack with their " << (this->_type ? this->_type->getType() : "hands");
        std::cout << std::endl;
}

void    HumanB::setWeapon(Weapon& type) {
    this->_type = &type;
}