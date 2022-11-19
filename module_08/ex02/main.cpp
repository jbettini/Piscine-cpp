/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:14:55 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/19 12:05:04 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"


int main(void) {
	
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "**** print mstack ****" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "***************************" << std::endl << std::endl;

	MutantStack<int> ss(mstack);
	MutantStack<int>::iterator it2 = ss.begin();
	MutantStack<int>::iterator ite2 = ss.end();
	
	std::cout << "**** print ss : mstack copy ****" << std::endl;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	std::cout << "***************************" << std::endl << std::endl;

	MutantStack<float> mstack2;

	mstack2.push(3.6);
	mstack2.push(5.7);
	mstack2.push(737.42);
	mstack2.push(0.91);

	MutantStack<float>::iterator it3 = mstack2.begin();
	MutantStack<float>::iterator ite3 = mstack2.end();
	++it;
	--it;
	std::cout << "**** print mstack2 ****" << std::endl;
	while (it3 != ite3)
	{
		std::cout << *it3 << std::endl;
		++it3;
	}
	std::cout << "***************************" << std::endl << std::endl;

	MutantStack<float> mstack3;
	if (mstack2.empty())
		std::cout << "is not empty" << std::endl;
	else
		std::cout << "is empty" << std::endl;	
	
	std::stack<int> s(mstack);
	return 0;
}
