/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:02:16 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/19 11:50:18 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main () {

    ClapTrap c1;
    ClapTrap c2("Clapp");

    c2.attack("Mush");
    std::cout << c2.getName() << " Hitpoint : " << c2.getHitPoints() << std::endl;
    c2.takeDamage(5);
    std::cout << c2.getName() << " Hitpoint : " << c2.getHitPoints() << std::endl;
    c2.beRepaired(7);
    std::cout << c2.getName() << " Hitpoint : " << c2.getHitPoints() << std::endl;
    c2.takeDamage(100);
    std::cout << c2.getName() << " Hitpoint : " << c2.getHitPoints() << std::endl;
    c2.attack("Mush");
    c2.takeDamage(5);
    c2.beRepaired(7);
    return 0;
}