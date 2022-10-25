/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:06:19 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/25 19:52:51 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include    <string>
#include    <iostream>

class Brain {

    public:
            Brain(void);
            Brain(std::string id);
            Brain(Brain const & src);
            ~Brain(void);

            Brain & operator=(Brain const & rhs); 
            std::string ideas[100];

};

#endif