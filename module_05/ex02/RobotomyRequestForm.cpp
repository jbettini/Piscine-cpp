/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 01:36:01 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/03 01:39:10 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) {
    *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

std::string     RobotomyRequestForm::getTarget(void) {
    return this->_target;
}

void            RobotomyRequestForm::execAction(Bureaucrat const & b) const {
    this->Form::execute(b);
    srand(time(NULL));
    std::cout << "Executing Robotomy wait Bzzzzzzzz" << std::endl;
    if (rand() % 2)
        std::cout << "The Robotomy was a sucess, " << this->_target << " was a robot now !" << std::endl;
    else
        std::cout << "The Robotomy failed !!" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {
    this->Form::operator=(rhs);
    this->_target = rhs._target;
    return (*this);
}
