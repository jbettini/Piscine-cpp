/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 01:26:44 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/03 03:11:55 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Constructor

Bureaucrat::Bureaucrat(void) : _name("deafult_name"), _grade(150) {};

Bureaucrat::Bureaucrat(int grade, std::string name) : _name(name){
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src) : _name(src.getName()), _grade(src.getGrade()) {}

Bureaucrat::~Bureaucrat(void) {}

// Funct

std::string Bureaucrat::getName(void) const{
    return this->_name;
}

int Bureaucrat::getGrade(void) const{
    return this->_grade;
}

void    Bureaucrat::incrementGrade(void) {
    if (this->_grade > 1)
        this->_grade--;
    else
        throw Bureaucrat::GradeTooHighException();
}

void    Bureaucrat::decrementGrade(void) {
    if (this->_grade < 150)
        this->_grade++;
    else
        throw Bureaucrat::GradeTooLowException();
}

void            Bureaucrat::signForm(std::string formName, bool t) const {
    if (t == 1)
        std::cout << this->_name << " signed " << formName << std::endl;
    else
        std::cout << this->_name << " couldn’t sign " << formName << " because is already signed !" << std::endl;
}

void     Bureaucrat::executeForm(Form const & form) const {
    form.execute(*this);
    std::cout << this->_name << " execute " << form.getFormName() << std::endl;
    form.execAction(*this);
}

//  Operator

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i ) {
    o << i.getName() << " , bureaucrat grade " << i.getGrade();
    return o;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & rhs) {
    this->_grade = rhs._grade;
    return *this;
}
