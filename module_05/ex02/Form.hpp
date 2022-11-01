/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 02:27:19 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/01 03:40:45 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form {

    public :
            Form(void);
            Form(const Form & src);
            Form(std::string name, int grade_to_sign, int grade_to_exec);
            ~Form(void);

            std::string         getFormName(void)       const;
            bool                getSigned(void)         const;
            int                 getGradeToSign(void)    const;
            int                 getGradeToExec(void)    const;
            void                beSigned(Bureaucrat const & b);
            
            Form & operator=(Form const & rhs);

    private :
            const   std::string _formName;
            bool                _signed;
            const   int         _gradeToSign;
            const   int         _gradeToExec;

    class GradeToLowException : public std::exception {
        virtual const char* what() const throw() {
                return ("Error from Form : Grade too low !");
        }
    };

    class GradeToHighException : public std::exception {
        virtual const char* what() const throw() {
                return ("Error from Form : Grade too high !");
        }
    };
};

std::ostream & operator<<(std::ostream & o, Form const & f);

#endif