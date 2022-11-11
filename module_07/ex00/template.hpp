/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 04:38:32 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/11 04:50:53 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP 

#include <string>
#include <iostream>

template <typename T>
T   max(T const & x, T const & y) {
    return ((x >= y) ? x : y);
}

template <typename T>
T   min(T const & x, T const & y) {
    return ((x <= y) ? x : y);
}

template <typename T>
void swap(T & x, T & y) {
    T tmp = x;
    x = y;
    y = tmp;
}

#endif