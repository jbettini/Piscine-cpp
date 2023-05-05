/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 07:50:34 by jbettini          #+#    #+#             */
/*   Updated: 2023/05/05 08:26:43 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main (int ac, char **av)
{
    if (ac == 2) {
        try {
            Btc btc(av[1]);
            btc.CreateDataMap();
            btc.CreateInput();
        }
        catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }
    else if (ac > 2)
        std::cout << "Invalid arguments" << std::endl;
    else 
        std::cout << "Error: could not open file." << std::endl;
    return 0;
}