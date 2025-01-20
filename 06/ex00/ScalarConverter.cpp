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

const std::string getType(char *input)
{
    if (!input)
        return "null";
    std::string str = input;
    std::stringstream ss(input);

    int num;
    ss << input;
    ss >> num;

    if (ss.fail())
        return "char";
    else
    {
        if (str.find(".") != std::string::npos)
        {
            if (str.find("f") != std::string::npos) return "float";
            return "double"; 
        }
        return "int";
    }
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
    const std::string type = getType(input);
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
