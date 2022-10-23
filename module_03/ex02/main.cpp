/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:02:16 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/22 18:21:31 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main () {

    FragTrap c1;
    FragTrap c2("Fraggg");

    c1.print();
    c1 = c2;
    c2.print();
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
    c1.print();
    c2.print();
    c1.highFivesGuys();
    return 0;
}