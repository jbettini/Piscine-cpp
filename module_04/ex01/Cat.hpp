/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:13:42 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/25 00:21:00 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

    public:

        Cat(void);
        Cat(std::string t);
        Cat(Cat const& src);
        virtual ~Cat(void);
        Cat & operator=(Cat const & rhs);

        std::string getType(void) const;
        void makeSound(void) const;

    private:
        
        Brain *_b;

};

#endif