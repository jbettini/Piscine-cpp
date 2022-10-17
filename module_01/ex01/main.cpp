/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 05:00:56 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/05 05:06:58 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char **av, char **env) {

    int     n = 4;
    Zombie  *horde = zombieHorde(n, "Mush");
    for (int i = 0; i < n; i++)
        horde[i].annouce();
    delete [] horde;
    return 0;
}