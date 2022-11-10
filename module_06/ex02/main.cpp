/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 06:17:54 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/10 06:25:29 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Base.hpp"

int main (void) {
    srand(time(NULL));
    Base *tmp = generate();
    Base &tmp2 = *(generate());
    tmp->identify(tmp);
    tmp2.identify(tmp2);
    return 1;
}