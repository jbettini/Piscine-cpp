/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 04:38:32 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/11 05:40:35 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP 

#include <string>
#include <iostream>

template <typename T>
void   print(T & x) {
    std::cout << "print template : " << x << std::endl;
}

template <typename T>
void    initToZero(T & x) {
    x = 0;
}

template <typename T>
void   iter(T *tab, int size, void (*f)(T &)) {
    for(int i = 0; i < size; i++)
        f(tab[i]);
}

#endif