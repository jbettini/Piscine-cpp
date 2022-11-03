/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 01:36:01 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/03 01:38:34 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("pardon", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) {
    *this = src;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

std::string     PresidentialPardonForm::getTarget(void) {
    return this->_target;
}

void            PresidentialPardonForm::execAction(Bureaucrat const & b) const {
    this->Form::execute(b);
    std::cout << this->_target << " was pardoned by the president !" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {
    this->Form::operator=(rhs);
    this->_target = rhs._target;
    return (*this);
}
