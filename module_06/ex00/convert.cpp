/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:13:39 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/10 04:25:30 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

// **** Convert Class ****

Convert::Convert(void) : _type(0), _inChar(0), _inInteger(0), _inFloat(0), _inDouble(0), _charNotPrintable(FALSE), _intNotPrintable(FALSE), _specialNumber(TRUE) {};

Convert::~Convert(void) {};

Convert::Convert(Convert const & other) {
    *this = other;
}

Convert & Convert::operator=(Convert const & rhs) {
    this->_inChar = rhs._inChar;
    this->_inInteger = rhs._inInteger;
    this->_inFloat = rhs._inFloat;
    this->_inDouble = rhs._inDouble;
    return *this;
}

// **** Utils ****

static  bool    specialNumber(std::string arg) {
    return (arg == "nan" || arg == "+inf" || arg == "-inf" || arg == "nanf" || arg == "-inff" || arg == "+inff");
}

static bool     fractPart(double    x) {
    double  fractPart = x - roundf(x);
    if (fractPart)
        return (1);
    return (0);
}

// **** Scalar ****

void    Convert::parse(std::string arg) {
    if (arg.empty())
        throw Convert::invalidInputException();
    else if(arg.find_first_of("0123456789") == arg.npos && !specialNumber(arg))
        this->_type =  CHAR;
    else if (arg.find_first_of("a.f") == arg.npos)
        this->_type = INT;
    else if (arg == "nan" || arg == "+inf" || arg == "-inf" || arg.find_first_of("f") == arg.npos)
        this->_type = DOUBLE;
    else if (arg == "nanf" || arg == "+inff" || arg == "-inff" || arg.find_first_of("f") != arg.npos)
        this->_type = FLOAT;
    else
        throw Convert::invalidInputException();
}

void    Convert::toChar(std::string arg) {
    
    if (arg.length() != 1)
        throw Convert::invalidInputException();
    this->_inChar = arg[0];
    this->_inInteger = static_cast<int>(this->_inChar);
    this->_inFloat = static_cast<float>(this->_inChar);
    this->_inDouble = static_cast<double>(this->_inChar);
    std::cout << "char : " << this->_inChar << std::endl;
    std::cout << "int : " << this->_inInteger << std::endl;
    std::cout << "float : " << this->_inFloat << ".0f" << std::endl;
    std::cout << "double : " << this->_inDouble << ".0" << std::endl;
}

void    Convert::toInt(std::string arg) {
    try {
        this->_inInteger = std::stoi(arg); 
    }
    catch (std::exception& e) {
        throw Convert::overflowException();
    }
    if ((this->_inInteger < 32 && this->_inInteger >= 0) || this->_inInteger > 127 || this->_inInteger < 0)
        this->_charNotPrintable = TRUE;
    this->_inChar = static_cast<char>(this->_inInteger);
    this->_inFloat = static_cast<float>(this->_inInteger);
    this->_inDouble = static_cast<double>(this->_inInteger);
    std::cout << "char : ";
    if (this->_charNotPrintable)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << this->_inChar << std::endl;
    std::cout << "int : " << this->_inInteger << std::endl;
    std::cout << "float : " << this->_inFloat << ".0f" << std::endl;
    std::cout << "double : " << this->_inDouble << ".0" << std::endl;
}

void    Convert::toFloat(std::string arg) {
    try {
        this->_inFloat = std::stof(arg); 
    }
    catch (std::exception& e) {
        throw Convert::overflowException();
    }
    if ((this->_inFloat < 32 && this->_inFloat >= 0) || this->_inFloat > 127 || this->_inFloat < 0)
        this->_charNotPrintable = TRUE;
    if (this->_inFloat > std::numeric_limits<int>::max() || this->_inFloat < std::numeric_limits<int>::min())
        this->_intNotPrintable = TRUE;
    this->_inChar = static_cast<char>(this->_inFloat);
    this->_inInteger = static_cast<int>(this->_inFloat);
    this->_inDouble = static_cast<double>(this->_inFloat);
    std::cout << "char : ";
    if (this->_specialNumber)
        std::cout << "impossible" << std::endl;
    else {
        if (this->_charNotPrintable)
            std::cout << "Non displayable" << std::endl;
        else
            std::cout << this->_inChar << std::endl;
    }
    if (this->_specialNumber)
        std::cout << "int : impossible" << std::endl;
    else if (this->_intNotPrintable)
        std::cout << "int : Overflow" << std::endl;
    else
        std::cout << "int : " << this->_inInteger << std::endl;
    std::cout << "float : " << this->_inFloat << (fractPart(this->_inFloat) ? "f" : ".0f" ) << std::endl;
    std::cout << "double : " << this->_inDouble << (fractPart(this->_inDouble) ? "" : ".0" ) << std::endl;
}

void    Convert::toDouble(std::string arg) {
    try {
        this->_inDouble = std::stod(arg); 
    }
    catch (std::exception& e) {
        throw Convert::overflowException();
    }
    if ((this->_inDouble < 32 && this->_inDouble >= 0) || this->_inDouble > 127 || this->_inDouble < 0)
        this->_charNotPrintable = TRUE;
    if (this->_inFloat > std::numeric_limits<int>::max() || this->_inFloat < std::numeric_limits<int>::min())
        this->_intNotPrintable = TRUE;
    this->_inChar = static_cast<char>(this->_inDouble);
    this->_inInteger = static_cast<int>(this->_inDouble);
    this->_inFloat = static_cast<float>(this->_inDouble);
    std::cout << "char : ";
    if (this->_specialNumber)
        std::cout << "impossible" << std::endl;
    else {
        if (this->_charNotPrintable)
            std::cout << "Non displayable" << std::endl;
        else
            std::cout << this->_inChar << std::endl;
    }
    if (this->_specialNumber)
        std::cout << "int : impossible" << std::endl;
    else if (this->_intNotPrintable)
        std::cout << "int : Overflow" << std::endl;
    else
        std::cout << "int : " << this->_inInteger << std::endl;
    std::cout << "float : " << this->_inFloat << (fractPart(this->_inFloat) ? "f" : ".0f" ) << std::endl;
    std::cout << "double : " << this->_inDouble << (fractPart(this->_inDouble) ? "" : ".0" ) << std::endl;
}

void    Convert::scalar(std::string arg) {

    this->parse(arg);
    if (arg == "nan" || arg == "+inf" || arg == "-inf" || arg == "nanf" || arg == "-inff" || arg == "+inff")
        this->_specialNumber = TRUE;
    else {
        this->_specialNumber = FALSE;
    }
    switch (this->_type) {
        case CHAR   : this->toChar(arg); break;
        case INT    : this->toInt(arg); break;
        case FLOAT  : this->toFloat(arg); break;
        case DOUBLE : this->toDouble(arg); break;
        default     : throw std::exception();
                
    }
}