/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 00:40:08 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/17 00:41:25 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

Harl::Harl(void) {};
Harl::~Harl(void) {};

void    Harl::_debug(void) {
    std::cout << "[DEBUG]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl << std::endl;
}
void    Harl::_info(void) {
    std::cout << "[INFO]" << std::endl << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl << std::endl;
}
void    Harl::_warning(void) {
    std::cout << "[WARNING]" << std::endl << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}
void    Harl::_error(void) {
    std:: cout << "[ERROR]" << std::endl << "This is unacceptable ! I want to speak to the manager now." << std::endl << std::endl;
}

void    Harl::complain(std::string level) {
    std::string check[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    void (Harl::*x[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
    // * Another Way *
    // typedef void (Harl::*harlMemberFn)(void);
    // harlMenmberFn x[4] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
    int i = -1;
    while (++i < 4)
        if (check[i] == level)
            break ;
    switch (i) {
        case 4 :
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break ;
        default :   
            while (i < 4)
                (this->*(x[i++]))();
            break ;
    }

   
}