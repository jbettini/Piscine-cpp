/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:13:42 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/31 00:34:04 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal{

    public:

        Animal(void);
        Animal(std::string t);
        Animal(Animal const& src);
        virtual ~Animal(void);
        Animal & operator=(Animal const & rhs);

        virtual void makeSound(void) const = 0;
        virtual std::string getType(void) const ; 

    protected:
                std::string type;
    

};

#endif