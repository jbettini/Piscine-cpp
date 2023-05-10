/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Insert.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 10:27:57 by jbettini          #+#    #+#             */
/*   Updated: 2023/05/10 16:26:04 by jbettini         ###   ########.fr       */
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


void    insert::InsertionSortVector(int start, int end) {
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


void insert::mergeSortVector(int start, int mid, int end) {
    std::vector<int> temp( end - start + 1);
    int i = start, j = mid + 1, k = 0;
    while (i <= mid && j <= end) {
        if (this->_myv[i] < this->_myv[j])
            temp[k++] = this->_myv[i++];
        else
            temp[k++] = this->_myv[j++];
    }
    while (i <= mid)
        temp[k++] = this->_myv[i++];
    while (j <= end)
        temp[k++] = this->_myv[j++];
    for (i = start, k = 0; i <= end; ++i, ++k)
        this->_myv[i] = temp[k];
}


void    insert::mergeInsertionSortVector(int start, int end) {

    int mid = (end + start) / 2;
    if (end - start + 1 <= 10) {
        this->InsertionSortVector(start, end + 1);
        return;
    }
    this->mergeInsertionSortVector(start, mid);
    this->mergeInsertionSortVector(mid + 1, end);
    this->mergeSortVector(start, mid, end + 1);
}


void    insert::InsertionSortDeque(int start, int end) {
    for (int i = start + 1; i <= end; i++) {
        int toSort = this->_myd[i];
        int j = i - 1;
        while (j >= start && toSort < this->_myd[j]) {
            this->_myd[j + 1] = this->_myd[j];
            j--;
        }
        this->_myd[j + 1] = toSort;
    }
}


void insert::mergeSortDeque(int start, int mid, int end) {
    std::deque<int> temp( end - start + 1);
    int i = start, j = mid + 1, k = 0;
    while (i <= mid && j <= end) {
        if (this->_myd[i] < this->_myd[j])
            temp[k++] = this->_myd[i++];
        else
            temp[k++] = this->_myd[j++];
    }
    while (i <= mid)
        temp[k++] = this->_myd[i++];
    while (j <= end)
        temp[k++] = this->_myd[j++];
    for (i = start, k = 0; i <= end; ++i, ++k)
        this->_myd[i] = temp[k];
}


void    insert::mergeInsertionSortDeque(int start, int end) {

    int mid = (end + start) / 2;
    if (end - start + 1 <= 10) {
        this->InsertionSortDeque(start, end + 1);
        return;
    }
    this->mergeInsertionSortDeque(start, mid);
    this->mergeInsertionSortDeque(mid + 1, end);
    this->mergeSortDeque(start, mid, end + 1);
}

void    insert::makeInput(void) {
    clock_t start, end;
    this->printContainer(this->_myv, 10, "Before");
    start = clock();
    this->mergeInsertionSortVector(0, this->_myv.size() - 1);
    end = clock();
    double timeTaken = double(end - start) / double(CLOCKS_PER_SEC);
    this->printContainer(this->_myv, 10, "After");
    std::cout << "Time to process a range of " << this->_myv.size() << " elements with std::vector : " << timeTaken * 1e6 << " us" << std::endl;
    start = clock();
    this->mergeInsertionSortDeque(0, this->_myv.size() - 1);
    end = clock();
    timeTaken = double(end - start) / double(CLOCKS_PER_SEC);
    std::cout << "Time to process a range of " << this->_myd.size() << " elements with std::deque : " << timeTaken * 1e6 << " us" << std::endl;   
}