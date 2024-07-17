/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:28:44 by glacroix          #+#    #+#             */
/*   Updated: 2024/07/17 15:47:35 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Colors.hpp"
#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc > 2)
    {
        std::cerr << RED << "You have to pass 1 argument to ./convert" << RESET << std::endl;
        return (1);
    }
    IScalarConverter::convert(argv[1]);
    return (0);
}
