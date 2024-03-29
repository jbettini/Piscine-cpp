/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 01:26:44 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/02 02:21:23 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("deafult_name"), _grade(150) {};

Bureaucrat::Bureaucrat(int grade, std::string name) : _name(name){
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else {
        this->_grade = grade;
    }
}

Bureaucrat::Bureaucrat( const Bureaucrat & src) : _name(src.getName()), _grade(src.getGrade()) {}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & rhs) {
    this->_grade = rhs._grade;
    return *this;
}

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

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i ) {
    o << i.getName() << " , bureaucrat grade " << i.getGrade();
    return o;
}