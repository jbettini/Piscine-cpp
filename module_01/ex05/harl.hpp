/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 00:30:29 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/11 00:59:06 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
