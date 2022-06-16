/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 03:12:35 by jbettini          #+#    #+#             */
/*   Updated: 2022/06/16 23:10:58 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(int ac, char **av)
{
    PhoneBook   book;
    std::string line;
    int         i;

    i = 0;
    std::cout << "Phone Book : " << std::endl;
    while (getline(std::cin, line))
    {
        if (i == 8)
            i = 0;
        if (line == "ADD" || line == "add")
        {
            book.add_contact(i);
            i++;
        }
        else if (line == "print")
            book.print_contact();
        else if (line == "EXIT" || line == "exit")
            break ;
        std::cout << "Phone Book : " << std::endl;
    }
}