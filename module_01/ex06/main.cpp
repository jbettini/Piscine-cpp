/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:36:40 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/17 00:33:42 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main (int ac, char **av) {

    if (ac != 2)
        std::cout << "Invalid arguments" << std::endl;
    else {
        Harl h;
        h.complain(av[1]);
    }
    return (0);
}