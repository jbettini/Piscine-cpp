/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 04:21:12 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/19 11:46:02 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main () 
{    
    // Weapon  club("crude spiked club");
    // HumanA bob("Bob", club);
    // bob.attack();
    // club.setType("some other type of club");
    // bob.attack();
    Weapon  club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.attack();
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
    return 0;
}