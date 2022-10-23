/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 17:49:20 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/22 19:07:59 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) {
    this->_name = "DiamondTrap";
    ClapTrap::_name = this->_name + "_clap_name";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    this->_class = "DiamondTrap";
    std::cout << "DiamondTrap Default Constructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name) {
    this->_name = name;
    ClapTrap::_name = this->_name + "_clap_name";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = this->FragTrap::_attackDamage;
    this->_class = "DiamondTrap";

    std::cout << "DiamondTrap Constructor with Parameter Called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) : ScavTrap(src._name), FragTrap(src._name) {
    *this = src;
    std::cout << "DiamondTrap Copy Constructor Called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap Destrucor Called, " << this->_name << " was destroyed !" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs) {
    std::cout << "DiamondTrap Assignement Operator Called" << std::endl;
    if (this != &rhs) {
        this->_name = rhs._name;
        this->_energyPoints = rhs._energyPoints;
        this->_hitPoints = rhs._hitPoints;
        this->_attackDamage = rhs._attackDamage;
        this->ClapTrap::_name = rhs.ClapTrap::_name;
    }
    return (*this);
}

void DiamondTrap::attack(const std::string& target) {
    this->ScavTrap::attack(target);
}

void DiamondTrap::whoami(void) {
    std::cout << "Child : " << this->_name << std::endl;
    std::cout << "Parent : " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::print(void) {
	std::cout << "name : " << this->_name << std::endl;
	std::cout << "hitpoints : " << this->_hitPoints << std::endl;
	std::cout << "energypoints : " << this->_energyPoints << std::endl;
	std::cout << "attackdamage : " << this->_attackDamage << std::endl;
	std::cout << "class : " << this->_class << std::endl;
}