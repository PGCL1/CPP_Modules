/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 20:18:30 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/01 20:24:48 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void swap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}



int main()
{
    int a = 14;
    int b = 28;
    std::cout << "a = " << a << " | b = " << b << std::endl;
    ::swap(a, b);
    std::cout << "a = " << a << " | b = " << b << std::endl;


    std::string str1 = "salut";
    std::string str2 = "la miss";
    std::cout << "str1 = " << str1 << " | str2 = " << str2 << std::endl;
    ::swap(str1, str2);
    std::cout << "str1 = " << str1 << " | str2 = " << str2 << std::endl;
    return 0;
}

