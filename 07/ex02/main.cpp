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

int main()
{
#if 1
    Array<int> a;
    std::cout << a.getElement(0) << std::endl;

    Array<int> b(10);
    std::cout << b.getElement(0) << std::endl;
#else

    int *a = new int();
    std::cout << a[0] << std::endl;

#endif
}

