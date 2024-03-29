/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 01:47:40 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/03 01:56:22 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main () {

    try {
            PresidentialPardonForm  a("criminal");
            RobotomyRequestForm     b("human");
            ShrubberyCreationForm   c("jardin");
            Bureaucrat              d(1, "President");
            Bureaucrat              e(150, "syndicat");
            a.beSigned(d);
            b.beSigned(d);
            c.beSigned(d);
            e.executeForm(a);
            e.executeForm(b);
            e.executeForm(c);
            // d.executeForm(a);
            // d.executeForm(b);
            // d.executeForm(c);
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}