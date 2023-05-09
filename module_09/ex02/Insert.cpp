/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Insert.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 10:27:57 by jbettini          #+#    #+#             */
/*   Updated: 2023/05/09 17:38:28 by jbettini         ###   ########.fr       */
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

// void    insert::sortList(void) {
//     int tmp;
//     for (std::list<int>::iterator it = this->_myl.begin(); it != this->_myl.end(); it++) {
//         std::list<int>::iterator next = it;
//         next++;
//         tmp = *it;
//         this->_myl.erase(it);
//         std::list<int>::iterator it2 = this->_myl.begin();
//         while (it2 != next && it2 != this->_myl.end() && *it2 < tmp)
//             it2++;
//         this->_myl.insert(it2, tmp);
//     }
// }

void    insert::InsertionSort(int start, int end) {
    int tmp;
    for (std::vector<int>::iterator it = this->_myv.begin() + start; it != this->_myv.end() - end ; it++) {
        tmp = *it;
        this->_myv.erase(it);
        std::vector<int>::iterator it2 = this->_myv.begin() + start;
        while (it2 != it && it2 != this->_myv.end() - end && *it2 < tmp)
            it2++;
        this->_myv.insert(it2, tmp);
    }
}

// void    insert::InsertionSort(int start, int end) {
//     int tmp;
//     for (int i = start; i < end; i++)
        
// }

void    insert::mergeSort(int start, int mid, int end) {
    std::vector<int>    left;
    std::vector<int>    right;

    for (std::vector<int>::iterator it = this->_myv.begin(); it != this->_myv.end() - mid; it++)
        left.push_back(*it);
    for (std::vector<int>::iterator it = this->_myv.begin() + mid; it != this->_myv.end(); it++)
        right.push_back(*it);
    for (std::vector<int>::iterator it = this->_myv.begin() + start; it != this->_myv.end() - end; it++){
        std::vector<int>::iterator leftIt = left.begin(); 
        std::vector<int>::iterator rightIt = right.begin();
        if (*leftIt < *rightIt) {
            it = leftIt;
            leftIt++;
        }
        else {
            it = rightIt;
            rightIt++;
        }
    }
}

void    insert::mergeInsertionSort(int start, int end) {

    int mid = (end + start) / 2;
    if (end - start + 1 >= 10) {
        this->mergeInsertionSort(start, mid);
        this->mergeInsertionSort(mid + 1, end);
        this->mergeSort(start, mid, end);
    }
    else 
        this->InsertionSort(start, end);

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
    // std::cout << "Time to process a range of " << this->_myl.size() << " elements with std::list : " << timeTaken * 1e6 << " us" << std::endl;   
}