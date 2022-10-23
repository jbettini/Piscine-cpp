/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:57:34 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/22 18:37:19 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// **** Canonical Form ****

ScavTrap::ScavTrap(void) : _mode(0) {
	std::cout << "ScavTrap Default Constructor Called" << std::endl;
	this->_name = "ScavTrap";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_class = "ScavTrap";
}

ScavTrap::ScavTrap(std::string name) : _mode(0) {
	std::cout << "ScavTrap Constructor with Parameter Called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage= 20;
	this->_class = "ScavTrap";
}

ScavTrap::ScavTrap( const ScavTrap & src ) : ClapTrap(src._name) {
	std::cout << "ScavTrap Copy Constructor Called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destrucor Called " << this->_name << " was destroyed !" << std::endl;
}

void					ScavTrap::guardGate() {
	if (this->_hitPoints > 0) {
		if (this->_mode == 0) {
			this->_mode++;
			std::cout << this->_class << " type " << this->_name << " switch to gate keeper mode !" << std::endl;
		}
		else {
			this->_mode--;
			std::cout << this->_class << " type " << this->_name << " switch to normal mode !" << std::endl;
		}
	}
}

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs ) {
	std::cout << "ScavTrap Assignement Operator Called" << std::endl;
	if ( this != &rhs )
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return *this;
}
