/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:18:32 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/18 16:15:50 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include <iterator>

class Span
{

	public :

				Span(void);
				Span(int N);
				Span( Span const & src );
				~Span(void);

				Span &		operator=( Span const & rhs );
				void		addNumber(int x);
				int			longestSpan(void);
				int			shortestSpan(void);

				std::list<int>	getLst(void);
				unsigned	int	getSize(void);
				std::list<int>::iterator	begin(void);
				std::list<int>::iterator	end(void);

				void	addRange(std::list<int>::iterator begin, std::list<int>::iterator end) {
					unsigned int distance = std::distance(begin, end);
					if ( distance >  this->getSize() - this->_lst.size())
						throw Span::AddNumberException();
					for (long i = -1; ++i < distance; begin++)
						this->_lst.push_back(*begin);
				}

				
	class AddNumberException : public std::exception {
		virtual const char *what() const throw() {
			return ("Can't add number : too much number in span");
		}
	};

	class NotEnoughNumberException : public std::exception {
		virtual const char *what() const throw() {
			return ("Not Enough Number in span to compare");
		}
	};

	private :
				std::list<int>		_lst;
				unsigned int	_size;


};

std::ostream &			operator<<( std::ostream & o, Span & src );

#endif