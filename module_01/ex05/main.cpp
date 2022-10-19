/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:36:40 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/19 11:46:51 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main () {
    Harl h;

    h.complain("DEBUG");
    h.complain("INFO");
    h.complain("WARNING");
    h.complain("ERROR");
    h.complain("er");
    return (0);
}