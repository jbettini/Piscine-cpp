/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 04:08:20 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/19 11:45:41 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type) : _name(name), _type(type) {};
HumanA::~HumanA(void) {} ;

void    HumanA::attack(void) {

        std::cout << this->_name + " attack with their " << this->_type.getType() 
        << std::endl;
}