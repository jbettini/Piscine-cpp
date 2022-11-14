/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 05:43:50 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/11 08:58:37 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "array.hpp"

int main(void) {
    
    std::cout << "a : "<< std::endl;
    Array <> a;
    std::cout << a;

    std::cout << "b : " << std::endl;
    Array <> b(2);
    std::cout << b;

    a = b;
    std::cout << "a = b : "<< std::endl;
    std::cout << a;
    Array <> c(a);

    std::cout << "a[] : "<< std::endl; 
    a[1] = 5;
    std::cout << a;
    std::cout << b;
    std::cout << c;
    try {
        a[100];
    }
    catch (std::exception &e) {
        std:: cout << e.what() << std::endl;
    }
    return (0);
}