/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 05:34:03 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/11 06:27:43 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "template.hpp"

int main(void) {
    int tab[] = {1, 2, 3};
    iter(tab, 3, print);
    iter(tab, 3, initToZero);
    iter(tab, 3, print);
    return (0);
}