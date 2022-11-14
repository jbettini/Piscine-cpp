/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:02:16 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/14 06:46:05 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main () {

    DiamondTrap c1;
    DiamondTrap c2("Viooooooo ");

    c1.print();
    c1 = c2;
    std::cout << std::endl;
    c2.print();
    std::cout << std::endl;
    std::cout << c2.getHitPoints() << std::endl;
    std::cout << std::endl;
    c2.attack("Mush");
    std::cout << c2.getName() << " Hitpoint : " << c2.getHitPoints() << std::endl;
    c2.takeDamage(5);
    std::cout << c2.getName() << " Hitpoint : " << c2.getHitPoints() << std::endl;
    c2.beRepaired(7);
    std::cout << c2.getName() << " Hitpoint : " << c2.getHitPoints() << std::endl;
    c2.takeDamage(100);
    std::cout << c2.getName() << " Hitpoint : " << c2.getHitPoints() << std::endl;
    c2.attack("Mush");
    c1.print();
    c2.print();
    c2.guardGate();
    c2.guardGate();
    c2.guardGate();
    c1.highFivesGuys();
    c1.whoami();
    return 0;
}