/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 02:27:19 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/10 03:13:07 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

    public :
            Form(void);
            Form(const Form & src);
            Form(std::string name, int grade_to_sign, int grade_to_exec);
            ~Form(void);

            std::string         getFormName(void)                       const;
            bool                getSigned(void)                         const;
            int                 getGradeToSign(void)                    const;
            int                 getGradeToExec(void)                    const;
            void                beSigned(Bureaucrat const & b);
            void                execute(Bureaucrat const & executor)    const;
            virtual     void    execAction(Bureaucrat const & b)        const = 0;
            
            Form & operator=(Form const & rhs);

    private :
            const   std::string _formName;
            bool                _signed;
            const   int         _gradeToSign;
            const   int         _gradeToExec;

    class GradeTooLowException : public std::exception {
        virtual const char* what() const throw() {
                return ("Error from Form : Grade too low !");
        }
    };

    class GradeTooHighException : public std::exception {
        virtual const char* what() const throw() {
                return ("Error from Form : Grade too high !");
        }
    };
     class ExecuteException : public std::exception {
        virtual const char* what() const throw() {
                return ("Error from Form : Cant be executed because is not signed !");
        }
    };
};

std::ostream & operator<<(std::ostream & o, Form const & f);

#endif 

