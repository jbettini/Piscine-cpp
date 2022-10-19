/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 05:00:56 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/19 11:44:34 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {

    int     n = 4;
    Zombie  *horde = zombieHorde(n, "Mush");
    for (int i = 0; i < n; i++)
        horde[i].annouce();
    delete [] horde;
    return 0;
}