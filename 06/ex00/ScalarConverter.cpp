/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:54:29 by glacroix          #+#    #+#             */
/*   Updated: 2024/07/17 17:51:10 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <iomanip>
#include <stdlib.h>

void IScalarConverter::convert(char* input)
{
        if (input == NULL)
        {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: nanf" << std::endl;
            std::cout << "double: nan" << std::endl;
            return;
        }
        std::string str = input;
        float f = atof(input);
        double d = f;
        int i = f;
        char c = i;

        if (str == "0")
        {
            std::cout << "char: Non displayable" << std::endl;
            std::cout << std::fixed << std::setprecision(1);
            std::cout << "int: " << i << std::endl;
            std::cout << "float: "<< f << "f" << std::endl;
            std::cout << "double: " << d << std::endl;
        }
        else
        {
            std::cout << "char: '" << c << "'" << std::endl;
            std::cout << std::fixed << std::setprecision(1);
            std::cout << "int: " << i << std::endl;
            std::cout << "float: "<< f << "f" << std::endl;
            std::cout << "double: " << d << std::endl;
        }
}
