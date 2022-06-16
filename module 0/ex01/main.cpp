/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 03:12:35 by jbettini          #+#    #+#             */
/*   Updated: 2022/06/16 05:30:27 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(int ac, char **av)
{
    PhoneBook   book;
    std::string line;
    int         i;

    i = 0;
    std::cout << "Phone Book : ";
    while (getline(std::cin, line))
    {
        if (line == "ADD" || line == "add")
            book.add_contact(i);
        else if (line == "EXIT" || line == "exit")
            break ;
        if (++i == 8)
            i = 0;
        std::cout << "Phone Book : ";
    }
}