/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:13:42 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/25 00:21:00 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{

    public:

        Dog(void);
        Dog(std::string t);
        Dog(Dog const& src);
        ~Dog(void);
        Dog & operator=(Dog const & rhs);
        std::string getType(void) const;

        void makeSound(void) const; 

    private:
            Brain *_b;
};

#endif