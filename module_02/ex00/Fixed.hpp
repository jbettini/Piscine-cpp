/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 06:10:00 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/15 02:08:00 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Fixed {

	public :
			Fixed(void);
			Fixed(const Fixed & copie);
			~Fixed(void);
			
			Fixed& operator=(const Fixed & rhs);

			int		getRawBits( void ) const;
			void	setRawBits( int const raw );
	
	private :
			int					_value;
			static const int 	_fix = 8;
};