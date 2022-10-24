/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:13:42 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/25 00:21:00 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class wrongAnimal {

    public:

        wrongAnimal(void);
        wrongAnimal(std::string t);
        wrongAnimal(wrongAnimal const& src);
        ~wrongAnimal(void);
        wrongAnimal & operator=(wrongAnimal const & rhs);

        void makeSound(void) const;
        std::string getType(void) const;
        

    protected:
                std::string type;
    

};

#endif