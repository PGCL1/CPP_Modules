/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 11:40:07 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/27 13:04:40 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>
#include <sstream>
#include <cstdlib>

RPN::RPN()
{
    std::cout << "Default Constructor RPN" << std::endl;
}

bool isDigit(char c)
{
    return (c >= '0' && c <= '9');
}

int strToNum(std::string str)
{
    int result;
    std::istringstream convert(str);
    convert >> result;
    return result;
}

void RPN::pushUntilSign(std::string input)
{
    if (this->size())
        std::cout << "Begin: " << top() << std::endl;
    unsigned long i = 0;
    for (;  input[i]; i++)
    {
        std::string test;
        char c = input[i];
        if (c == '-' || c == '+' || c == '/' || c == '*')
        {
            push(c);
            break;
        }
        if (c != ' ')
            push(c);
    }
    calculateExpression();
    std::string newString = &input[i+1];
    std::cout << "\nnewString = " << newString << std::endl;
    if (newString.size() > 1)
        pushUntilSign(newString);
    
}

int whatSign(char sign)
{
    if (sign == '+')
        return 0;
    else if (sign == '-')
        return 1;
    else if (sign == '*')
        return 2;
    else if (sign == '/')
        return 3;
    else
        return -1;
}

//TODO: check if sign is really a sign
void RPN::calculateExpression()
{
    enum signTypes {
        PLUS = 0,
        MINUS,
        MULT,
        DIV,
    };
     
    char sign = top(); 
    std::cout << "TOP = " << top() << " | " << sign << std::endl;
    if (whatSign(sign) == -1)
        throw RPN::badExpression();
    pop();

    //here is the problem need to do an atoi
    int num2 = top() - '0';
    std::cout << "num2 = " << top() << " | " << num2 << std::endl;
    pop();

    int num1 = top()- '0';
    std::cout << "num1 = " << top() << " | " << num1 << std::endl;
    pop();

    int res;
    switch (whatSign(sign)) {
        case PLUS:
            res = num1 + num2;
            break;
        case MINUS:
            res = num1 - num2;
            break;
        case MULT:
            res = num1 * num2;
            break;
        case DIV:
            res = num1 / num2;
            break;
    }
    push(res);
    std::cout << "res = " << top() << " | " << res << std::endl;
}

const char* RPN::badExpression::what() const throw()
{
   return ("Arthimetic expression is wrong"); 
}

RPN::~RPN() 
{
    std::cout << "Default Destructor RPN" << std::endl;
}
