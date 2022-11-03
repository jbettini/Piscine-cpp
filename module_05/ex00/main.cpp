/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 01:47:40 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/31 02:02:41 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main () {

    try {
        Bureaucrat  a;
        // Bureaucrat  b(200, "B");
        // Bureaucrat  c(0, "C");
        Bureaucrat  d(1, "D");
        Bureaucrat  e(150, "E");
        // e.decrementGrade();
        // d.incrementGrade();
        std::cout << d << std::endl;
        std::cout << e << std::endl;
        std::cout << a << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}