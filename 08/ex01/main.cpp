/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:26:33 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/16 14:17:55 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
#if 0

#else
    try {
        Span a(5);
        a.addNumber(4);
        a.addNumber(15);
        a.addNumber(6);
        a.addNumber(71);

        std::cout << a.shortestSpan() << std::endl;
        std::cout << a.longestSpan() << std::endl;
        a.printElements();
    }
    catch(const std::exception& err)
    {
        std::cout << "Error: " << err.what() << std::endl;
    }
#endif
    return 0;
}
