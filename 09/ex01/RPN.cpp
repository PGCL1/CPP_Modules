/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 11:40:07 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/23 15:18:52 by glacroix         ###   ########.fr       */
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

void RPN::calculatePolishNotation()
{
    RPN::iterator it = this->begin();
    RPN::iterator end = this->end();
    while (it != end)
    {

    }
}

RPN::~RPN() 
{
    std::cout << "Default Destructor RPN" << std::endl;
}
