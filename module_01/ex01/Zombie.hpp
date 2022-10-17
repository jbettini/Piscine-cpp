/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 04:45:36 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/05 05:02:56 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie {

    public :
            Zombie(void);
            ~Zombie(void);
            void    annouce(void) const;
            void    setname(const std::string name);

    private :
            std::string _name;
};

Zombie*    zombieHorde( int N, std::string name );

#endif