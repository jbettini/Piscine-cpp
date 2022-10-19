/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 04:25:24 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/19 11:44:06 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {

    randomChump("Sam");
    Zombie *Mush = newZombie("Mush");
    Mush->announce();
    delete Mush;
    return 0;
}