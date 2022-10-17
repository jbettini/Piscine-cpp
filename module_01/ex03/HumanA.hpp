/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 04:08:20 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/07 04:38:14 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMAN_A
# define HUMAN_A

#include "Weapon.hpp"

class HumanA {

    public :
            HumanA(std::string name, Weapon& type);
            ~HumanA(void);
            void    attack(void);

    private :
            std::string _name;
            Weapon& _type;
};

#endif