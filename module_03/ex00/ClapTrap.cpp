/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:57:34 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/18 15:15:40 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
	std::cout << "ClapTrap Constructor Called" << std::endl;
	this->_name = name;
}

ClapTrap::ClapTrap( const ClapTrap & src ) {
	std::cout << "ClapTrap Copy Constructor Called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destrucor Called" << std::endl << this->_name << " died" << std::endl;
}

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs ) {
	std::cout << "ClapTrap Assignement Operator Called" << std::endl;
	if ( this != &rhs )
		*this = rhs;
	return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints > 0)
	{
		std::cout << this->_name << " lose " << amount << "points of damage!" << std::endl;
		this->_hitPoints -= amount;
		if (this->_hitPoints > 0)
			std::cout << this->_name << "died !" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << this->_name << " repairs itself " << amount << "hit points !" << std::endl;
		this->_energyPoints--;
		this->_hitPoints += amount;
	}
}