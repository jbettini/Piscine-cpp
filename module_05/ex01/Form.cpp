/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 02:44:44 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/02 02:21:51 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Constructor

Form::Form(void) : _formName("default_form_name"), _signed(0), _gradeToSign(150), _gradeToExec(150) {}

Form::Form(const Form & src) : _formName(src.getFormName()), _signed(0), _gradeToSign(src.getGradeToSign()), _gradeToExec(src.getGradeToExec()){}

Form::Form(std::string name, int gradeToSign, int gradeToExec) : _formName(name), _signed(0), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {
    if (gradeToExec > 150 || gradeToSign > 150)
        throw Form::GradeTooLowException();
    else if (gradeToExec < 1 || gradeToSign < 1)
        throw Form::GradeTooHighException();
}

Form::~Form(void) {};

// Funct

std::string Form::getFormName(void)     const {
    return (this->_formName);
}

bool                Form::getSigned(void)       const {
    return (this->_signed);
}

int         Form::getGradeToSign(void)  const {
    return (this->_gradeToSign);
}

int         Form::getGradeToExec(void)  const {
    return (this->_gradeToExec);
}

void        Form::beSigned(Bureaucrat const & b) {
    if (!this->_signed)
    {
        if (b.getGrade() <= this->_gradeToSign) {
            this->_signed = 1;
            b.signForm(this->_formName, 1);
        }
        else
            throw Form::GradeTooLowException();
    }
    else
        b.signForm(this->_formName, 0);
}

// Operator

Form    & Form::operator=(Form const & rhs) {
    this->_signed = rhs.getSigned();
    return (*this);
}

std::ostream    & operator<<(std::ostream & o, Form const & f) {
    o << "Form Name : " << f.getFormName() << std::endl;
    o << (f.getSigned() ? "Is Signed !" : "Is not Signed !") << std::endl;
    o << "Grade to Sign : " << f.getGradeToSign() << std::endl;
    o << "Grade to Exec : " << f.getGradeToExec() << std::endl;
    return o;
}