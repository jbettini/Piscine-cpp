/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:18:32 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/18 15:46:12 by jbettini         ###   ########.fr       */
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

				void	addRange(std::list<int>::iterator begin, std::list<int>::iterator end) {
					unsigned int	size;
					std::list<int>::iterator tmp2 = begin;
					for (size = 0; tmp2 != end; tmp2++) {
						size++;
						std::cout << "adress tmp : " << *tmp2 << std::endl;
						std::cout << "adress end : " << &end << std::endl;
					}
					if (size > this->getSize() - this->_lst.size())
						throw Span::AddNumberException();
					for (std::list<int>::iterator tmp = begin; tmp != end; tmp++)
						this->_lst.push_back(*tmp);
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