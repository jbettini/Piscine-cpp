/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:57:34 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/20 10:27:04 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// **** Canonical Form ****

ClapTrap::ClapTrap(void) : _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap Constructor with Parameter Called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src ) {
	std::cout << "ClapTrap Copy Constructor Called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destrucor Called" << std::endl << this->_name << " was destroyed !" << std::endl;
}

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs ) {
	std::cout << "ClapTrap Assignement Operator Called" << std::endl;
	if ( this != &rhs )
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return *this;
}

// **** Member funct ****

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
		std::cout << this->_name << " lose " << amount << " points of damage!" << std::endl;
		this->_hitPoints -= amount;
		if (this->_hitPoints <= 0)
			std::cout << this->_name << " died !" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << this->_name << " repairs itself " << amount << " hit points !" << std::endl;
		this->_energyPoints--;
		this->_hitPoints += amount;
	}
}

// **** Accessor ****

std::string		ClapTrap::getName(void) {
	return (this->_name);
}
int				ClapTrap::getHitPoints(void) {
	return (this->_hitPoints);
}
int				ClapTrap::getEnergyPoints(void) {
	return (this->_energyPoints);
}
int				ClapTrap::getAttackDamage(void) {
	return (this->_attackDamage);
}

void	ClapTrap::print(void) {
	std::cout << "name : " << this->_name << std::endl;
	std::cout << "energypoints : " << this->_energyPoints << std::endl;
	std::cout << "hitpoints : " << this->_hitPoints << std::endl;
	std::cout << "attackdamage : " << this->_attackDamage << std::endl;
}