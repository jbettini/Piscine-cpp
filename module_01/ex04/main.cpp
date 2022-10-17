/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 06:34:01 by jbettini          #+#    #+#             */
/*   Updated: 2022/10/11 01:44:11 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int main (int ac, char **av) {
    if (ac != 4)
        std::cout << "Invalid arguments !" << std::endl;
    else {
        std::ifstream infile(av[1]);
        if (infile.fail())
            std::cout << "Invalid file !" << std::endl;
        else if (infile.peek() == -1)
            std::cout << "Empty file !" << std::endl;
        else {
            std::string tmp = av[1];
            std::string s1 = av[2];
            std::string s2 = av[3];
            std::ofstream outfile(tmp + ".replace");
            size_t  pos;
            while (std::getline(infile, tmp))
            {
                if (s1 != s2 && !s1.empty())
                    while((pos = tmp.find(s1)) != tmp.npos)
                    {
                        tmp.erase(pos, s1.length());
                        tmp.insert(pos, s2);
                    }
                outfile << tmp << std::endl;
            }
            infile.close();
            outfile.close();
        }
    }
    return 0;
}