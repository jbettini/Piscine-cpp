/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 02:10:24 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/03 03:07:22 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {} ;

Intern::~Intern(void) {} ;

Intern::Intern (Intern const & src) {
    *this = src;
}

Form       *Intern::makeForm(std::string formType, std::string target) {
    std::string check[3] = { "presidential pardon", "robotomy request", "shrubbery request"};
    int i = -1;
    while (++i < 3)
        if (check[i] == formType)
            break ;
    Form    *ret = NULL;
    switch (i) {
        case 0 : 
                                                        ret = new PresidentialPardonForm (target);
                                                        break;
        case 1 : 
                                                        ret = new RobotomyRequestForm (target);
                                                        break;
        case 2 :
                                                        ret = new ShrubberyCreationForm (target);
                                                        break;
        default :
                                                        std::cout << "Unknow Form !" << std::endl;
    }
    return ret;
}

void    Intern::takeBreak(void) const {}

Intern & Intern::operator=(Intern const & rhs) {
    rhs.takeBreak();
    return  *this; 
}
