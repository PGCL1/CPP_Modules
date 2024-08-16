/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:26:33 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/16 19:13:05 by glacroix         ###   ########.fr       */
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
        a.addAll(4, 15, 61, 7);

        std::cout << "Shortest span is: " << a.shortestSpan() << std::endl;
        std::cout << "Longest span is: " << a.longestSpan() << std::endl;
        a.printElements();
    }
    catch(const std::exception& err)
    {
        std::cout << "Error: " << err.what() << std::endl;
    }
#endif
    return 0;
}
