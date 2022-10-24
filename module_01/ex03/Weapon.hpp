/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 03:44:21 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/25 00:54:01 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON
# define WEAPON

#include <string>
#include <iostream>

class Weapon {

    public :
            Weapon(std::string weaponName);
            ~Weapon(void);
            std::string const & getType(void);
            void setType(std::string newtype);
    
    private :
            std::string _type;
    
};

#endif