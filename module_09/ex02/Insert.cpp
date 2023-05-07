/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Insert.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 10:27:57 by jbettini          #+#    #+#             */
/*   Updated: 2023/05/07 15:47:46 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Insert.hpp"
#include <sys/time.h>

insert::insert(void) {};

insert::~insert(void) {};

insert & insert::operator=(insert & rhs) {
    this->_myl = rhs.getList();
    this->_myv = rhs.getVector();
    return *this;
}

insert::insert(char **av) {
    for (int i = 0; av[i]; i++)
        if(std::atol(av[i]) > INT_MAX || std::atol(av[i]) < INT_MIN || std::atoi(av[i]) < 0)
            throw insert::negException();
    for (int i = 0; av[i]; i++) {
        this->_myl.push_back(std::atol(av[i]));
        this->_myv.push_back(std::atol(av[i]));
    }
};

void    insert::sortList(void) {
    int tmp;
    for (std::list<int>::iterator it = this->_myl.begin(); it != this->_myl.end(); it++) {
        std::list<int>::iterator next = it;
        next++;
        tmp = *it;
        this->_myl.erase(it);
        std::list<int>::iterator it2 = this->_myl.begin();
        while (it2 != next && it2 != this->_myl.end() && *it2 < tmp)
            it2++;
        this->_myl.insert(it2, tmp);
    }
}

void    insert::sortVector(void) {
    int tmp;
    for (std::vector<int>::iterator it = this->_myv.begin() + 1; it != this->_myv.end(); it++) {
        tmp = *it;
        this->_myv.erase(it);
        std::vector<int>::iterator it2 = this->_myv.begin();
        while (it2 != it && it2 != this->_myv.end() && *it2 < tmp)
            it2++;
        this->_myv.insert(it2, tmp);
    }
}

void    insert::makeInput(void) {
    clock_t start, end;
    this->printContainer(this->_myv, 5, "Before");
    start = clock();
    this->sortVector();
    end = clock();
    double timeTaken = double(end - start) / double(CLOCKS_PER_SEC);
    this->printContainer(this->_myv, 5, "After");
    std::cout << "Time to process a range of " << this->_myv.size() << " elements with std::vector : " << timeTaken * 1e6 << " us" << std::endl;
    start = clock();
    this->sortList();
    end = clock();
    timeTaken = double(end - start) / double(CLOCKS_PER_SEC);
    std::cout << "Time to process a range of " << this->_myl.size() << " elements with std::list : " << timeTaken * 1e6 << " us" << std::endl;   
}