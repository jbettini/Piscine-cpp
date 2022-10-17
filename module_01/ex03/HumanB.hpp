/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 04:08:20 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/07 05:00:13 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
# define HUMAN_B

#include "Weapon.hpp"

class HumanB {

    public :
                HumanB(std::string name);
                ~HumanB(void);
                void    attack(void);
                void    setWeapon(Weapon& type);  

    private :
                std::string _name;
                Weapon*     _type;
};

#endif