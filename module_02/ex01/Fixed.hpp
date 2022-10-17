/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 06:10:00 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/15 08:12:47 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cmath>

class Fixed {

	public :
			Fixed(void);
			Fixed(int const x);
			Fixed(float const x);
			Fixed(const Fixed & copie);
			~Fixed(void);
			
			Fixed& operator=(const Fixed & rhs);

			int		getRawBits( void ) const;
			void	setRawBits( int const raw );
			float	toFloat( void ) const;
			int		toInt( void ) const;
	
	private :
			int					_value;
			static const int 	_scale = 8;
};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );