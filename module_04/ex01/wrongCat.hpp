/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:13:42 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/25 00:21:00 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef wrongCat_HPP
# define wrongCat_HPP

#include <iostream>
#include <string>
#include "wrongAnimal.hpp"

class wrongCat : public wrongAnimal{

    public:

        wrongCat(void);
        wrongCat(std::string t);
        wrongCat(wrongCat const& src);
        ~wrongCat(void);
        wrongCat & operator=(wrongCat const & rhs);

        std::string getType(void) const;

        void makeSound(void) const; 

};

#endif