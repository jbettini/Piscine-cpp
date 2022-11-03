/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 01:36:01 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/02 04:07:24 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "fstream"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrubbery", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) {
    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

std::string     ShrubberyCreationForm::getTarget(void) {
    return this->_target;
}

void            ShrubberyCreationForm::execAction(Bureaucrat const & b) const{
    this->Form::execute(b);
    std::ofstream out(this->_target + "_shrubbery");
    for (int i = 0; i < 5; i++ ) {
        out <<  "          .     .  .      +     .      .          ."  << std::endl;
        out <<  "     .       .      .     #       .           ." << std::endl;
        out <<  "        .      .         ###            .      .      ." << std::endl;
        out <<  "      .      .   `#:. .:##`##:. .:#`  .      ." << std::endl;
        out <<  "          .      . `####`###`####`  ." << std::endl;
        out <<  "      .     `#:.    .:#`###`#:.    .:#`  .        .       ." << std::endl;
        out <<  "  .             `#########`#########`        .        ." << std::endl;
        out <<  "        .    `#:.  `####`###`####`  .:#`   .       ." << std::endl;
        out <<  "     .     .  `#######``##`##``#######`                  ." << std::endl;
        out <<  "                .`##`#####`#####`##`           .      ." << std::endl;
        out <<  "    .   `#:. ...  .:##`###`###`##:.  ... .:#`     ." << std::endl;
        out <<  "      .     `#######`##`#####`##`#######`      .     ." << std::endl;
        out <<  "    .    .     `#####``#######``#####`    .      ." << std::endl;
        out <<  "            .     `      000      `    .     ." << std::endl;
        out <<  "       .         .   .   000     .        .       ." << std::endl;
        out <<  ".. .. ..................O000O........................ ......" << std::endl;
    }
    out.close();
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
    this->Form::operator=(rhs);
    this->_target = rhs._target;
    return (*this);
}
