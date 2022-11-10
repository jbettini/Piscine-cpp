/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 09:56:21 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/10 04:17:02 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <string>
#include <iostream>
#include <cmath>
#include <limits>
#include <locale>
#include <exception>

enum    t_bool {
    FALSE = 0,
    TRUE,
    };

enum    Type {
        CHAR = 0,
        INT,
        FLOAT,
        DOUBLE,
    };
    
class   Convert {

    public  :
                Convert(void);
                Convert(Convert const & other);
                ~Convert(void);
                
                void        toChar(std::string arg);
                void        toInt(std::string arg);
                void        toFloat(std::string arg);
                void        toDouble(std::string arg);
                void        parse(std::string arg);
                void        scalar(std::string arg);
                void        checkArgument(std::string arg);

                Convert &   operator=(Convert const & rhs);
                

                int         _type;
    private :
                char        _inChar;
                int         _inInteger;
                float       _inFloat;
                double      _inDouble;
                bool        _charNotPrintable;
                bool        _intNotPrintable;
                bool        _specialNumber;
                
    class invalidInputException : public std::exception {
            virtual const   char* what() const  throw() {
                    return ("Error : Invalid input");
            }
    };
    class overflowException : public std::exception {
            virtual const   char* what() const  throw() {
                    return ("Error : Overflow");
            }
    };

};

#endif