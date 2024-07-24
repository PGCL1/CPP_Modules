/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:54:40 by glacroix          #+#    #+#             */
/*   Updated: 2024/07/24 09:56:32 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <string>

class IScalarConverter {
    public:
        static void convert(char* input);

};

int isDecimal(char *str);
int isInt(char *str);

void convertChar(char *input);
void convertInt(char *input);
void convertFloat(char *input);
void convertDouble(char *input);

void notPrintable();
void printTypes(int i, char c, double d, float f);

std::string getType(char *input);

#endif
