/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:52:44 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/18 14:52:09 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// **** Canonical Form ****

Span::Span(void) : _size(0) {}

Span::Span(int N) : _size(N) {}

Span::Span( const Span & src ) { 
	*this = src;
}

Span::~Span(void) {}

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs ) {
		this->_lst = rhs._lst;
		this->_size = rhs._size;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Span & src )
{

	std::list<int>	tmp = src.getLst();
	o << "**** Start print ****" << std::endl;
	o << "Size :	" << src.getSize() << std::endl;
	o << "---------------------" << std::endl;
	for (std::list<int>::iterator it = tmp.begin(); it != tmp.end(); it++)
		o << *it << std::endl;
	o << "**** End print ****" << std::endl;
	o << "-------------------" << std::endl;
	return o;
}

// **** Accessor ****

std::list<int>	Span::getLst(void) {
	return (this->_lst);
}

unsigned	int	Span::getSize(void) {
	return (this->_size);
}

// **** Member Funct ****

void	Span::addNumber(int x) {
	if (this->_lst.size() < this->_size)
		this->_lst.push_back(x);
	else
		throw Span::AddNumberException();
}

int		Span::longestSpan(void) {
	if (this->_lst.size() > 1) {
		int min = *(this->_lst.begin());
		int max = *(this->_lst.begin());
		std::list<int>::iterator it;
		for (it = this->_lst.begin(); it != this->_lst.end(); it++)
			if (*it > max)
				max = *it;
		for (it = this->_lst.begin(); it != this->_lst.end(); it++)
			if (*it < min)
				min = *it;
		return (max - min);
	}
	else
		throw Span::NotEnoughNumberException();
	return (0);
}

int		Span::shortestSpan(void) {
	if (this->_lst.size() > 1) {
		int min = this->longestSpan();
		std::list<int>::iterator it;
		std::list<int>::iterator it2;
		for (it = this->_lst.begin(); it != this->_lst.end(); it++)
			for (it2 = ++(this->_lst.begin()); it2 != this->_lst.end(); it2++)
				if (min > *it2 - *it && *it2 >= *it && it != it2)
					min = *it2 - *it;
		return (min);
	}
	else
		throw Span::NotEnoughNumberException();
	return (0);
}
