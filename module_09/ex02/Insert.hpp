/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Insert.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 10:08:49 by jbettini          #+#    #+#             */
/*   Updated: 2023/05/07 15:12:36 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string> 
#include <iostream>
#include <vector>
#include <list>
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
            
            std::list<int> getList(void) {
                return (this->_myl);
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
                std::list<int> _myl;
                std::vector<int> _myv;
};