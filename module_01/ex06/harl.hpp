/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 00:30:29 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/17 13:15:11 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP 
# define HARL_HPP 

#include <string>
#include <iostream>

class Harl {

    public  :
                Harl(void);
                ~Harl(void);
   				void    complain( std::string level );

    private :
				void	_debug( void );
                void	_info( void );
                void	_warning( void ); 
                void	_error( void );
};

#endif