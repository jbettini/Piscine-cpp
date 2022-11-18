/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:18:33 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/18 15:16:53 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void) {

    Span    sp(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);


    std::cout << sp.longestSpan() << std::endl;
    std::cout << sp.shortestSpan() << std::endl;

    Span    sp2(5);

    sp2.addRange((sp.getLst()).begin(), (sp.getLst()).end());
}