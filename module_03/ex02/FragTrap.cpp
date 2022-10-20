/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:57:34 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/20 13:04:52 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// **** Canonical Form ****

FragTrap::FragTrap(void) {
	std::cout << "FragTrap Default Constructor Called" << std::endl;
	this->_name = "FragTrap";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 20;
	this->_class = "FragTrap";
}

FragTrap::FragTrap(std::string name) {
	std::cout << "FragTrap Constructor with Parameter Called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage= 20;
	this->_class = "FragTrap";
}

FragTrap::FragTrap( const FragTrap & src ) : ClapTrap(src._name){
	std::cout << "FragTrap Copy Constructor Called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destrucor Called" << std::endl << this->_name << " was destroyed !" << std::endl;
}

FragTrap &				FragTrap::operator=( FragTrap const & rhs ) {
	std::cout << "FragTrap Assignement Operator Called" << std::endl;
	if ( this != &rhs )
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return *this;
}

void					FragTrap::highFivesGuys(void){
	std::cout << this->_name << " want an high five !" << std::endl;
}