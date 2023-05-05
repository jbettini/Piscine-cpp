/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 06:11:11 by jbettini          #+#    #+#             */
/*   Updated: 2023/05/05 08:30:13 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::string removeCharacter(std::string str, char toRemove) {
    for (int i = 0; str.find(toRemove) != str.npos; i++)
        str.erase(str.find(toRemove), 1);
    return (str);
}

size_t  testfile(std::ifstream & file) {
    if (file.fail())
            std::cout << "Invalid file !" << std::endl;
    else if (file.peek() == -1)
            std::cout << "Empty file !" << std::endl;
    else
        return 0;
    return 1;
}

Btc::Btc(void) : _data(0), _input(0){}

Btc::Btc(std::string av) : _data("./data.csv"), _input(av){
    if (testfile(this->_data))
        throw Btc::ErrorFileException();
    if (testfile(this->_input))
        throw Btc::ErrorFileException();
}

Btc & Btc::operator=(const Btc & rhs){
    this->_datamap = rhs._datamap;
    return *this;
}

Btc::~Btc(void) {
    _data.close();
    _input.close(); 
}

void    Btc::CreateDataMap(void) {
    std::string date;
    std::string price;
    getline(this->_data, date);
    getline(this->_input, date);
    for (int i = 0; !(this->_data.eof()) ; i++) {
        getline(this->_data, date, ',');
        getline(this->_data, price);
        if (!(this->_data.eof()) && !date.empty() && !price.empty())
            this->_datamap[date] = price;
    }
}

int    multiChar(std::string line, char tofind, int how, int mode) {
    int find = 0;
    if (mode == 1) {
        for (int i = 0; line[i]; i++)
            if (line[i] == tofind)
                find++;
        if (find == how)
            return 0;
    }
    else if (mode == 2) {
       for (int i = 0; line[i]; i++)
            if (line[i] == tofind)
                find++;
        if (find <= how)
            return 0; 
    }
    return 1;
}

int validDate(std::string firstPart){
    for(size_t i = 0; firstPart[i]; i++) {
        if ( !(firstPart[i] >= '0' && firstPart[i] <= '9') && firstPart[i] != '-' && i != (firstPart.length() - 1))
            return (0);
        else if (i == (firstPart.length() - 1)  && firstPart[i] != ' ')
            return (0);
    }
    return (1);
}

int bissextil(size_t year) {
    return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}

int    Btc::checkFirstPart(std::string firstPart) {
    if (((!multiChar(firstPart, '-', 2, 1)) && validDate(firstPart)) && firstPart[0] != '-' && firstPart[firstPart.length() - 1] != '-') {
        std::replace( firstPart.begin(), firstPart.end(), '-', ' ');
        std::string tmp;
        size_t  idx = 0;
        size_t  years = std::stol(firstPart, &idx);
        tmp = firstPart.substr(idx);
        size_t  month = std::stol(tmp, &idx);
        tmp = tmp.substr(idx);
        size_t  day = std::stol(tmp, &idx);
        std::replace( firstPart.begin(), firstPart.end() - 1, ' ', '-');
        if (month <= 0 || month > 12) 
            std::cout << "Error: bad input => " << firstPart << "." << std::endl;
        else if (day > 31 || day <= 0)
            std::cout << "Error: bad input => " << firstPart << "." << std::endl;
        else if ((month == 2 || month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
            std::cout << "Error: bad input => " << firstPart << "." << std::endl;
        else if (day > 29 && month == 2 && bissextil(years))
            std::cout << "Error: bad input => " << firstPart << "." << std::endl;
        else if (day > 28 && month == 2 && years % 4 != 0)
            std::cout << "Error: bad input => " << firstPart << "." << std::endl;
        else if (years < 2009 || (years == 2009 && month == 2 && day == 1))
            std::cout << "BTC did not exist before 2009/02/02 => " << firstPart << "." << std::endl;
        else 
            return 1;
    }
    else {
        std::cout << "Error: bad input => " << firstPart << std::endl;
        return 0;
    }
    return 0;
}

int validNumber(const std::string secondPart) {
        for(size_t i = 1; secondPart[i]; i++)
            if ( !(secondPart[i] >= '0' && secondPart[i] <= '9') && secondPart[i] != '.' && secondPart[i] != '-' )
                return (0);
    return (1);
}

int    Btc::checkSecondPart(std::string secondPart) {
    if (((!multiChar(secondPart, '.', 1, 2)) && (!multiChar(secondPart, '-', 1, 2)) && validNumber(secondPart)) && 
                                secondPart[0] != '.' && secondPart[secondPart.length() - 1] != '.' && secondPart[0] != '-' && secondPart[secondPart.length() - 1] != '-') {
        float  n = std::stof(secondPart);
        if (n < 0)
            std::cout << "Error: not a positive number." << std::endl;
        else if (n > 1000)
            std::cout << "Error: too large a number." << std::endl;
        else
            return (1);
    }
    else {
        std::cout << "Error: bad input => " << secondPart << std::endl;
        return (0);
    }
    return (0);
}
std::string makeNewDate(size_t years, size_t month, size_t day)
{
    std::string newYears = std::to_string(years);
    std::string newMonth = std::to_string(month);
    std::string newDay = std::to_string(day);
    if (month < 10)
        newMonth = "0" + std::to_string(month);
    if (day < 10)
        newDay = "0" + std::to_string(day);
    return (newYears + "-" + newMonth + "-" + newDay);
}

float  Btc::searchDate(std::string firstPart) {
    std::replace( firstPart.begin(), firstPart.end(), '-', ' ');
    std::string tmp;
    size_t  idx = 0;
    size_t  years = std::stol(firstPart, &idx);
    tmp = firstPart.substr(idx);
    size_t  month = std::stol(tmp, &idx);
    tmp = tmp.substr(idx);
    size_t  day = std::stol(tmp, &idx);
    if (years > 2022) {
        std::map<std::string, std::string>::iterator it = (this->_datamap.end());
        return (std::stof((--it)->second));
    }
    else {
        for (int i = 0; this->_datamap.find(makeNewDate(years, month, day)) == this->_datamap.end(); i++) {
            day--;
            if (day == 0) {
                day = 31;
                month--;
                if (month == 0) {
                    month = 12;
                    years--;
                    if (years == 0) {
                        std::cout << "ERROR: Date Not find !" << std::endl;
                        exit(1);
                    }
                }
            }
        }
    }
    return (std::stof(this->_datamap.find(makeNewDate(years, month, day))->second));
}

float    Btc::searchExchangeValue(std::string firstPart, std::string secondPart) {
    if (this->_datamap.find(firstPart) != this->_datamap.end())
        return (std::stof(secondPart) * std::stof(this->_datamap.find(firstPart)->second));
    return std::stof(secondPart) * searchDate(firstPart);
}

void    Btc::ParsePrintInput(std::string line) {
    if (line[0] == '|' || line[line.length() - 1] == '|' || line.find('|') == std::string::npos || multiChar(line, '|', 1, 1)) {
        std::cout << "Error: bad input => " << line << std::endl;
    }
    else {
        std::string firstPart, secondPart;
        firstPart = line.substr(0, line.find('|'));
        secondPart = line.substr(line.find('|') + 1);
        if (checkFirstPart(firstPart))
            if (checkSecondPart(secondPart)) {
                    firstPart = removeCharacter(firstPart, ' ');
                    std::cout << firstPart << " =>" << secondPart << " = " << searchExchangeValue(firstPart, secondPart) << std::endl;
            }
    }
}

void    Btc::CreateInput(void) {
    std::string line;
    for (int i = 0;  getline(this->_input, line); i++) {
        this->ParsePrintInput(line);
    }
}