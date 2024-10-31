/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:47:02 by glacroix          #+#    #+#             */
/*   Updated: 2024/10/31 18:39:59 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>

bool unwantedChars(std::string const& str)
{
    for (unsigned int i = 0; str[i]; i++)
    {
        if (str[i] != ' ' && !isDigit(str[i]) && !isSign(str[i]))
            return true;
    }
    return false;
}

bool inputWrong(std::string const& str)
{
    int numSigns = 0;
    int numDigits = 0;
    for (unsigned long i = 0; str[i]; i++)
    {
        if (isDigit(str[i]))
            numDigits++;
        else if (isSign(str[i]))
            numSigns++;
    }
    if (numSigns + 1 != numDigits)
        return true;
    return false;
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error" << std::endl;
        return 1;
    }
    std::string input(argv[1]);
    if (unwantedChars(input) || inputWrong(input))
    {
        std::cerr << "Error" << std::endl;
        return 1;
    }
    try
    {
        RPN polish;    
        polish.pushUntilSign(input);
        std::cout << polish.top() << std::endl;
    }
    catch (const std::exception& err)
    {
        std::cout  << err.what() << std::endl;
    }
    return 0;
}

