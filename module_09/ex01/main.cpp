/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 11:51:53 by jbettini          #+#    #+#             */
/*   Updated: 2023/05/06 12:27:00 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stack>

int main(int ac, char **av) {
    int             error = 0;
    int             tmp;
    std::stack<float> mystack;
    if (ac != 2) {
        std::cout << "Error" << std::endl;
        return (0);
    }
    char    *str = av[1];
    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ')
            continue ;
        else if (isdigit(str[i]))
            mystack.push(std::atoi(str + i));
        else if (str[i] == '-') {
            tmp = mystack.top();
            mystack.pop();
            mystack.top() -= tmp;
        }
        else if (str[i] == '+') {
            tmp = mystack.top();
            mystack.pop();
            mystack.top() += tmp;
        }
        else if (str[i] == '*') {
            tmp = mystack.top();
            mystack.pop();
            mystack.top() *= tmp;
        }
        else if (str[i] == '/') {
            tmp = mystack.top();
            mystack.pop();
            mystack.top() /= tmp;
        }
        else {
            error++;
            break ;
        }
    }
    if (error == 1 || mystack.size() > 1)
        std::cout << "Error "  << std::endl;
    else
        std::cout << mystack.top() << std::endl;
    return 0;
}