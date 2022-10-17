/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 04:25:24 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/05 04:34:36 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char **av, char **env) {

    randomChump("Sam");
    Zombie *Mush = newZombie("Mush");
    Mush->announce();
    delete Mush;
    return 0;
}