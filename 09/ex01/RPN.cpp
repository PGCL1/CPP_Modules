/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 11:40:07 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/23 18:24:12 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>
#include <sstream>

RPN::RPN(std::string& input)
{
    for (unsigned int i = 0; input[i]; i++)
    {
        if (input[i] != ' ')
        {
            std::cout << "input[" << i << "]: " << input[i] << std::endl;
            this->push(input[i]);
        }
    }
}

/*bool RPN::wrongInputStack() 
{
    RPN::iterator it = this->begin();
    RPN::iterator end = this->end();

    while (it != end)
    {

    }
    return true;
}*/

bool isDigit(char c)
{
    return (c >= '0' && c <= '9');
}

//when we get here, the input should be sanitized
void RPN::calculatePolishNotation()
{
    RPN::iterator it = this->begin();
  //  RPN::iterator end = this->end();
        int first = *it; 
        if (first < 0 || first > 9)
            std::cerr << "Error" << std::endl;
        else
        {
            std::cout << "first: " << first << std::endl;
            it++;
            this->pop();
        }

        int second = *it;
        if (second < 0 || second > 9)
            std::cerr << "Error" << std::endl;
        else
        {
            std::cout << "second: " << second << std::endl;
            it++;
            this->pop();
        }
}

RPN::~RPN() 
{
    std::cout << "Default Destructor RPN" << std::endl;
}
