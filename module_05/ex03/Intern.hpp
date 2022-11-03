/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 02:10:19 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/03 03:07:03 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
    
    public :
            Intern(void);
            Intern(const Intern & src);
            ~Intern(void);

            Intern  &   operator=(const Intern & src);
            void        takeBreak(void) const;

            Form       *makeForm(std::string formType, std::string target);

};

#endif