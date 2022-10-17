/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 04:03:07 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/05 04:33:09 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string newname) : _name(newname) {} ;

Zombie::~Zombie(void) {
    std::cout << this->_name << " is died by headshot !" << std::endl;
} ;

void Zombie::announce(void) {
    std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
};