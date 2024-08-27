/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:47:02 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/27 12:03:16 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>

bool inputWrong(std::string const& str)
{
    std::cout << "`" << str << "`" << std::endl;
    for (unsigned int i = 0; str[i]; i++)
    {
        if (str[i] != ' ' && (str[i] < '0' || str[i] > '9')
                && str[i] != '-' && str[i] != '+'
                && str[i] != '/' && str[i] != '*')
            return true;
    }
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
    if (inputWrong(input) == true)
    {
        std::cerr << "Error" << std::endl;
        return 1;
    }
    RPN polish;    
    polish.pushUntilSign(input);
    std::cout << polish.top() << std::endl;
    return 0;
}
