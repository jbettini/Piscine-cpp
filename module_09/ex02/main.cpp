/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 10:07:47 by jbettini          #+#    #+#             */
/*   Updated: 2023/05/07 12:12:47 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Insert.hpp"

int main(int ac, char **av) {
    if (ac < 3)
        std::cout << "Error: Invalid Number of Arguments" << std::endl;
    else {
        try {
            insert  i(&av[1]);
            i.makeInput();
        }
        catch (const std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    return 0;
}