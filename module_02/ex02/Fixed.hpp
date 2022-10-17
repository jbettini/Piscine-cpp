/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 06:10:00 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/16 06:15:03 by jbettini         ###   ########.fr       */
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
			
			Fixed&	operator=(const Fixed & rhs);
			Fixed	operator+(const Fixed & rhs);
			Fixed	operator-(const Fixed & rhs);
			Fixed	operator*(const Fixed & rhs);
			Fixed	operator/(const Fixed & rhs);

			Fixed&	operator++(void);
			Fixed	operator++(int);
			Fixed&	operator--(void);
			Fixed	operator--(int);

			bool	operator<(const Fixed & rhs);
			bool 	operator>(const Fixed & rhs);
			bool	operator<=(const Fixed & rhs);
			bool	operator>=(const Fixed & rhs);
			bool	operator==(const Fixed & rhs);
			bool	operator!=(const Fixed & rhs);

			int		getRawBits( void ) const;
			void	setRawBits( int const raw );
			float	toFloat( void ) const;
			int		toInt( void ) const;

			static Fixed		&min(Fixed & a, Fixed & b);
			static Fixed		&max(Fixed & a, Fixed & b);
			static const Fixed	&min(const Fixed & a,const Fixed & b);
			static const Fixed	&max(const Fixed & a,const Fixed & b);
	
	private :
			int					_value;
			static const int 	_scale = 8;
};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );