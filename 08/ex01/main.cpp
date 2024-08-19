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
        Span a(100);
        int myArray[] = {4, 15, 61, 43, 56, 78, 80, 2, 14, 5, 6};
        std::vector<int> vec;

        std::vector<int>::iterator it;
        it = vec.begin();
        vec.insert(it, myArray, myArray + 11);
        a. addAll(vec);

        Span b(101);
        b = a;
        std::cout << "Shortest span is: " << b.shortestSpan() << std::endl;
        std::cout << "Longest span is: " << b.longestSpan() << std::endl;
        b.printElements();
    }
    catch(const std::exception& err)
    {
        std::cout << "Error: " << err.what() << std::endl;
    }
#endif
    return 0;
}
