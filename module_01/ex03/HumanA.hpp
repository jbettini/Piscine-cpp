/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 04:08:20 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/17 13:16:05 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
# define HUMANA_HPP

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