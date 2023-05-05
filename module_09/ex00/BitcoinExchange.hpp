/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 06:11:03 by jbettini          #+#    #+#             */
/*   Updated: 2023/05/05 08:03:16 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
    #define BITCOINEXCHANGE_HPP
    
#include <string>
#include <iostream>
#include <fstream>
#include <map>
class Btc {

    public :
            Btc(void);
            Btc(const Btc& src);
            Btc(std::string av);
            ~Btc(void);

            Btc &   operator=(const Btc & rhs);
            void    CreateDataMap(void);
            void    CreateInput(void);
            void    ParsePrintInput(std::string line);
            int     checkFirstPart(std::string firstPart);
            int     checkSecondPart(std::string secondPart);
            float  searchExchangeValue(std::string firstPart, std::string secondPart);
            float  searchDate(std::string firstPart);
            
    private :
                std::ifstream   _data;
                std::ifstream   _input;
                std::map<std::string, std::string> _datamap;

    class ErrorFileException : public std::exception {
        virtual const char* what() const throw() {
            return ("Error from Btc: file error !");
        }
    };
};

size_t                     testfile(std::ifstream & file);

#endif