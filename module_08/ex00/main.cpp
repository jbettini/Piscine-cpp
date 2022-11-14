/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 08:11:46 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/11 08:23:57 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>

int main(void) {
    std::list<int> lst;

    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);

    std::cout << *(easyfind(lst, 4)) << std::endl;
    return 0;
}