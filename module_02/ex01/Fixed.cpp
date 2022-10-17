/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 06:17:18 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/15 02:24:17 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// **** Constructor & Destructor ****

Fixed::Fixed(void) : _value(0) {

    std::cout << "Default constructor called" << std::endl;
} ;

Fixed::Fixed(int const value) {

    std::cout << "Int constructor called" << std::endl;
    this->_value = value * (1 << this->_scale);
} ;

Fixed::Fixed(float const value) {

    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(value * (1 << this->_scale));
} ;

Fixed::Fixed(const Fixed & copie) { 

    std::cout << "Copy constructor called" << std::endl;
    *this = copie;
}

Fixed::~Fixed(void) {

    std::cout << "Destructor called" << std::endl;
} ;

// **** Operator overload ****

Fixed & Fixed::operator=(const Fixed & rhs) {

    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_value = rhs.getRawBits();
    return (*this);

}

std::ostream &			operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return o;
}

// **** Member Funct ****

int Fixed::getRawBits(void) const {
    
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void   Fixed::setRawBits(int const raw) {

    this->_value = raw;
} 

float Fixed::toFloat( void ) const {

    return ((float)this->_value) / (1 << this->_scale);
}

int Fixed::toInt( void ) const {

    return (this->_value / (1 << this->_scale));
}