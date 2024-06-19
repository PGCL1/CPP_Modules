/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:34:40 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/19 15:05:11 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    try
    {
        Bureaucrat a("Vio", 10);
        a.decrementGrade();
        std::cout << a << std::endl;
        a.incrementGrade();
        std::cout << a << std::endl;

        Bureaucrat b("Bad", 1);
        b.incrementGrade();
        std::cout << "This won't print" << std::endl;
    }
    catch(std::exception& error)
    {
        std::cout << "Error: " << error.what() << std::endl;
    }
}
