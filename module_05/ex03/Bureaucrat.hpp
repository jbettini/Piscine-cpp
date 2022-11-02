/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 01:05:28 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/02 05:19:57 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat {
    
    public :
            Bureaucrat(void);
            Bureaucrat(int grade, std::string name);
            Bureaucrat(const Bureaucrat & src);
            ~Bureaucrat(void);

            Bureaucrat &    operator=(const Bureaucrat & rhs);
            
            int             getGrade(void) const; 
            std::string     getName(void) const;
            void            incrementGrade(void);
            void            decrementGrade(void);
            
            void            signForm(std::string formName, bool t) const;
            void            executeForm(Form const & form) const;


    private :
            std::string const _name;
            int               _grade;

    class GradeTooHighException : public std::exception {
        virtual const char* what() const throw() {
            return ("Error from Bureaucrat : Grade too Hight !");
        }
    };
    class GradeTooLowException : public std::exception {
        virtual const char* what() const throw() {
            return ("Error from Bureaucrat : Grade too low !");
        }
    };
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );
#endif