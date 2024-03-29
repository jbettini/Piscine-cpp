/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 03:44:21 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/25 00:54:01 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string newWeapon) : _type(newWeapon) {};
Weapon::~Weapon(void) {};

std::string const & Weapon::getType(void){

        return this->_type;
}

void Weapon::setType(std::string newtype){

        this->_type = newtype;
}
