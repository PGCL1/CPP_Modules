/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 11:40:07 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/27 15:37:15 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(RPN const& example) 
{
    (void) example;
}

RPN& RPN::operator=(RPN& example) {
    if (this != &example)
        return (example);
    return *this;
}

bool isDigit(char c)
{
    return (c >= '0' && c <= '9');
}

bool isSign(char c)
{
    return (c == '-' || c == '+' || c == '*' || c == '/');
}

void RPN::pushUntilSign(std::string input)
{
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
            push(c - '0');
    }
    calculateExpression();
    
    //skipping the sign here 
    std::string newString = &input[i+1];
    if (newString.size() > 1)
        pushUntilSign(newString);
    
}

/*void RPN::printStack()
{
    iterator it = this->begin();
    iterator end = this->end();
    while (it != end)
    {
        std::cout << *it << std::endl;
        it++;
    }
}*/

static int whatSign(char sign)
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

void RPN::calculateExpression()
{
    enum signTypes {
        PLUS = 0,
        MINUS,
        MULT,
        DIV,
    };
     
    char sign = top(); 
    if (whatSign(sign) == -1)
        throw RPN::badExpression();
    pop();
    int num2 = top();
    pop();
    int num1 = top();
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
            if (num1 == 0 || num2 == 0)
                throw RPN::badExpression();
            res = num1 / num2;
            break;
    }
    push(res);
}

const char* RPN::badExpression::what() const throw()
{
   return ("Arthimetic expression is wrong"); 
}

RPN::~RPN() {}
