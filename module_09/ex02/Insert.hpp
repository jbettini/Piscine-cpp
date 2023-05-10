/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Insert.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 10:08:49 by jbettini          #+#    #+#             */
/*   Updated: 2023/05/09 19:09:06 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string> 
#include <iostream>
#include <vector>
#include <deque>
#include <limits>
#include <iterator>
#include <iomanip>

class insert {
    
    public :
            insert(void);
            insert(char **av);
            ~insert(void);
            insert & operator=(insert & rhs);

            void    makeInput(void);
            void    sortVector(void);
            void    sortList(void);
            void    mergeInsertionSort(int start, int end); 
            void    InsertionSort(int start, int end);
            void    mergeSort(int start, int mid, int end);
            
            std::deque<int> getDeque(void) {
                return (this->_myd);
            }

            std::vector<int> getVector(void) {
                return (this->_myv);
            }
            
            template <typename T>
            void    printContainer(T container, int n, std::string prompt) {
                int i = 0;
                std::cout << prompt << ":   ";
                typename T::iterator it;
                for (it = container.begin(); it != container.end(); it++) {
                    std::cout << *it << " ";
                    if (i == n) {
                        std::cout << "[...]";
                        break ;
                    }
                    i++;
                }
                std::cout << std::endl;
            }          

        class negException : public std::exception {
            virtual const char* what() const throw() {
            return ("Error");
            }
        };

    private :
                std::deque<int> _myd;
                std::vector<int> _myv;
};