/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 14:54:40 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/05 12:42:11 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <exception>

int main()
{
#if 1
    try
    {
        Array<int> b(10);
        std::cout << b.getElement(5) << std::endl;
        std::cout << b.getSize() << std::endl;
        for (size_t i = 0; i < 10; i++)
            b.setElement(i, 4);
        std::cout << b[9] << std::endl;

        Array<int> test(b);
        for (size_t i = 0; i < 10; i++)
            std::cout << test[i] << " ";
        std::cout << std::endl;

        Array<int> c;
        std::cout << c[0] << std::endl;
        
    }
    catch (std::exception &err)
    {
        std::cout << "Error: " << err.what() << std::endl;
    }

#endif
}

