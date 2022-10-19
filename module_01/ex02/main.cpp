/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 05:22:09 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/19 11:44:49 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main() {

    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;

    std::cout << "* Memory Adress *" << std::endl << std::endl;
    std::cout << "str : " << &str << std::endl;
    std::cout << "ptr : " << ptr << std::endl;
    std::cout << "ref : " << &ref << std::endl << std::endl;

    std::cout << "* Value *" << std::endl << std::endl;
    std::cout << "str : " << str << std::endl;
    std::cout << "ptr : " << *ptr << std::endl;
    std::cout << "ref : " << ref << std::endl;
    
    return (0);
}