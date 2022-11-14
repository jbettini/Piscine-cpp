/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 07:47:00 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/11 08:26:19 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iterator>
#include <iostream>
#include <string>

template <typename T>
typename T::iterator easyfind(T container, int i) {
    
    std::typename T::iterator it;
    for (it = container.begin(); it != container.end(); it++)
        if (*it == i)
            return it;
    return it;
}

#endif