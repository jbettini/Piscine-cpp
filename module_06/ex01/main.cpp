/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 05:28:16 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/10 05:48:06 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

uintptr_t    serialize(Data *ptr){
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data        *deserialize(uintptr_t ptr){
    return (reinterpret_cast<Data *>(ptr));
}

int main (void)
{
    Data        *d  = new Data;
    Data        *tmp;
    uintptr_t   ptr;

    d->tmp = 42;
    d->tmp2 = 'A';

    std::cout <<"d Adress : " << d << std::endl << "d -> tmp : " << d->tmp << std::endl << "d -> tmp2 : " << d->tmp2 << std::endl << std::endl;
    ptr = serialize(d);
    std::cout << "ptr serialized : " << ptr << std::endl << std::endl;
    tmp = deserialize(ptr);
    std::cout << "tmp Adress : " << tmp << std::endl << "tmp -> tmp : " << tmp->tmp << std::endl << "tmp -> tmp2 : " << tmp->tmp2 << std::endl;

    delete d;
    return (0);
}