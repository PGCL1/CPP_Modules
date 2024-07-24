/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:54:29 by glacroix          #+#    #+#             */
/*   Updated: 2024/07/24 08:24:17 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "Colors.hpp"
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string.h>

int isDecimal(char *str)
{
    int count_dot = 0;
    int count_f = 0;
    size_t i = 0;

    if (str[i] == '-' || str[i] == '+')
        i++;
    for (; str[i]; i++)
    {
        if (str[i] == '.' || str[i] == 'f')
        {
            if (str[i] == '.')
                count_dot++;
            if (str[i] == 'f')
                count_f++;
            continue;
        }
        if (!(str[i] >= '0' && str[i] <= '9') || count_dot > 1 || count_f > 1)
            return (0);
    }
    if (count_dot || count_f)
        return (1);
    return (0);
}

int isInt(char *str)
{
    size_t i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    for (; str[i]; i++)
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
            return (0);
    }
    return (1);
}

std::string getType(char *input)
{
    const std::string types[5] = {"char", "double", "float", "int", "null"};
    if (!input)
        return (types[4]);
    const std::string str_input = input;
    if (isDecimal(input))
    {
        if (str_input.find_first_of('.'))
        {
            if (str_input.find_first_of('f'))
                return (types[2]);
            else
                return (types[1]);
        }
    }
    else if (isInt(input))
        return (types[3]);
    return (types[0]);
}


void notPrintable()
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: nanf" << std::endl;
    std::cout << "double: nan" << std::endl;
}

void printTypes(int i, char c, double d, float f)
{
    if (i <= 0 || i > 127)
        std::cout << "char: `" << c << "` " << "Non displayable" << std::endl;
    else
        std::cout << "char: " << c << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "int: " << i << std::endl;
    std::cout << "float: "<< f << "f" << std::endl;
    std::cout << "double: " << d << std::endl;
}

void convertChar(char *input)
{
    std::string str = input;
    if (str.length() > 1)
        std::cerr << RED << "Argument isn't a char, an int, float or double so str[0] `" << str[0] <<
            "` used for conversion" << RESET << std::endl;
    char c = input[0];
    int i = c;
    double d = i;
    float f = i;
    printTypes(i, c, d, f);
}

void convertInt(char *input)
{
    int i = atoi(input);
    char c = i;
    double d = i;
    float f = i;
    printTypes(i, c, d, f);
}

void convertFloat(char *input)
{
    float f = atof(input);
    double d = f;
    int i = f;
    char c = i;
    printTypes(i, c, d, f);
}

void convertDouble(char *input)
{
    double d = atof(input);
    float f = d;
    int i = f;
    char c = i;
    printTypes(i, c, d, f);
}

void IScalarConverter::convert(char* input)
{
    std::string type = getType(input);
    if (type == "null")
    {
        notPrintable();
        return;
    }
    std::string str = input;
    if (str == "nan" || str == "+inf" || str == "-inf" || str == "+inff" || str == "-inff" || str == "inf")
    {
        notPrintable();
        return;
    }
    std::cout << "input type: " << type << std::endl;
    if (type == "char")
        convertChar(input);
    else if (type == "int")
        convertInt(input);
    else if (type == "float")
        convertFloat(input);
    else if (type == "double")
        convertDouble(input);
}
