/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:56:18 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/09 18:37:08 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

// int main(int argc, char ** av) {
    
//     int a;
//     // size_t sz;
//     std::string tmp = av[1];
//     try {
//        a = std::stoi(tmp);
//     }
//     catch (const std::exception &e){
//        std::cout <<  e.what() << std::endl;}
//     if (argc && a)
//         {}
//     std::cout << "a : " << a << std::endl;
    

int main (int ac, char **av) {
    if (ac != 2)
        std::cout << "Invalid Input" << std::endl;
    else {
        try
        {
            Convert c;
            c.scalar(av[1]);
        }
        catch(const std::exception& e) {
            std::cout << e.what() << std::endl; }
        
        
    }
}