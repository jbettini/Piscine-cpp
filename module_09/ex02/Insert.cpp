/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Insert.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 10:27:57 by jbettini          #+#    #+#             */
/*   Updated: 2023/05/10 15:14:05 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Insert.hpp"
#include <sys/time.h>

insert::insert(void) {};

insert::~insert(void) {};

insert & insert::operator=(insert & rhs) {
    this->_myd = rhs.getDeque();
    this->_myv = rhs.getVector();
    return *this;
}

insert::insert(char **av) {
    for (int i = 0; av[i]; i++)
        if(std::atol(av[i]) > INT_MAX || std::atol(av[i]) < INT_MIN || std::atoi(av[i]) < 0)
            throw insert::negException();
    for (int i = 0; av[i]; i++) {
        this->_myd.push_back(std::atol(av[i]));
        this->_myv.push_back(std::atol(av[i]));
    }
};


void    insert::InsertionSort(int start, int end) {
    for (int i = start + 1; i <= end; i++) {
        int toSort = this->_myv[i];
        int j = i - 1;
        while (j >= start && toSort < this->_myv[j]) {
            this->_myv[j + 1] = this->_myv[j];
            j--;
        }
        this->_myv[j + 1] = toSort;
    }
}


// void insert::mergeSort(int start, int mid, int end) {
// }


void    insert::mergeInsertionSort(int start, int end) {

    int mid = (end + start) / 2;
    if (end - start + 1 <= 10) {
        this->InsertionSort(start, end + 1);
        return;
    }
    this->mergeInsertionSort(start, mid);
    this->mergeInsertionSort(mid + 1, end);
    this->mergeSort(start, mid, end + 1);
}

void    insert::makeInput(void) {
    // clock_t start, end;
    this->printContainer(this->_myv, this->_myv.size(), "Before");
    this->mergeInsertionSort(0, this->_myv.size() - 1);
    this->printContainer(this->_myv, this->_myv.size(), "After");
    // start = clock();
    // this->sortVector();
    // end = clock();
    // double timeTaken = double(end - start) / double(CLOCKS_PER_SEC);
    // this->printContainer(this->_myv, 5, "After");
    // std::cout << "Time to process a range of " << this->_myv.size() << " elements with std::vector : " << timeTaken * 1e6 << " us" << std::endl;
    // start = clock();
    // this->sortList();
    // end = clock();
    // timeTaken = double(end - start) / double(CLOCKS_PER_SEC);
    // std::cout << "Time to process a range of " << this->_myd.size() << " elements with std::list : " << timeTaken * 1e6 << " us" << std::endl;   
}