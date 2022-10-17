/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:26:01 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/05 04:33:53 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie {
    
    public :    
            Zombie(std::string newname);
            ~Zombie(void);
            void announce( void );
            
    private :  
        std::string _name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif