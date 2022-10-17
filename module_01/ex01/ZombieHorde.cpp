/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 04:56:14 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/05 05:00:45 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name ) {

    Zombie  *horde = new Zombie[N];
    for (int i = 0; i < N ; i++)
        horde[i].setname(name);
    return (horde);
}