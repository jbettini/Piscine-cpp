/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:03:18 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/25 19:54:18 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {    
    std::cout << "Brain default constructor called !" << std::endl;
    for(int i = 0; i < 100 ; i++)
        this->ideas[i] = "default_ideas";
}

Brain::Brain(std::string id) {    
    std::cout << "Brain default constructor called !" << std::endl;
    for(int i = 0; i < 100 ; i++)
        this->ideas[i] = id;
}

Brain::Brain(Brain const & src) {
    std::cout << "Brain copy constructor called !" << std::endl;
    *this = src;
}

Brain::~Brain(void) { 
    std::cout << "Brain Destructor called !" << std::endl;
}

Brain & Brain::operator=(Brain const & rhs) {
    for(int i = 0; i < 100 ; i++)
        this->ideas[i] = rhs.ideas[i];
    return *this;
}