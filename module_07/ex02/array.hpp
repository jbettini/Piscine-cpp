/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 05:57:06 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/11 07:29:08 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>
#include <exception>

template <typename T = int>
class Array {

    class   invalidIndexException : public std::exception {
        virtual const char *what() const throw() {
            return ("Invalid Index: out of range");
        }
    };

    public :
                Array(void) : _array(NULL), _size(0) {}
                Array(unsigned int n) : _size(n){
                    this->_array = new T[n];
                }
                Array(Array const & other) : _array(NULL), _size(0){
                    *this = other;
                }
                ~Array(void) {
                    if (this->_array)
                        delete [] this->_array;
                };
                
                unsigned int size(void) const {
                    return (this->_size);
                }
                
                T   *getArray(void) const {
                    return (this->_array);
                }

                Array   &    operator=(Array const & rhs) {
                    if (this->_array)
                        delete [] this->_array;
                    this->_array = NULL;
                    this->_size = rhs.size();
                    if (rhs.size() >= 0) {
                        this->_array = new T[rhs.size()];
                        for(unsigned int i = 0; i < rhs.size(); i++)
                            this->_array[i] = rhs._array[i];
                    }
                    return (*this);
                }

                T   & operator[](unsigned int i) {
                    if (i <= this->size())
                        return (this->_array[i]);
                    throw Array::invalidIndexException();
                }
    
    private :
                T           *_array;
                unsigned int _size;

};

template<typename T>
std::ostream & operator<<(std::ostream &o, Array<T> &t) {
    
    if (!t.getArray())
        std::cout << "Array is NULL" << std::endl;
    else
        for(unsigned int i = 0; i < t.size(); i++) {
            o << "index " << i << " : " << t[i] <<std::endl;
        } 
    return o;
}

#endif