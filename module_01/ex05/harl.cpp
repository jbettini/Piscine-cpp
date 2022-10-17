/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 00:40:08 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/17 00:39:29 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

Harl::Harl(void) {};
Harl::~Harl(void) {};

void    Harl::_debug(void) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
}
void    Harl::_info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}
void    Harl::_warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void    Harl::_error(void) {
    std:: cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level) {
    std::string check[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    void (Harl::*x[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
    // * Another Way *
    // typedef void (Harl::*harlMemberFn)(void);
    // harlMenmberFn x[4] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
    for (int i = 0; i < 4; i++)
        if (check[i] == level)
        {
            (this->*(x[i]))();
            break;
        }
        else if (i + 1 == 4)
            std::cout << "Nothing to do :)" << std::endl;
}