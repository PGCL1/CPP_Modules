/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 12:55:31 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/05 12:30:02 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>
void add1(T& num)
{
   num += 1; 
}

template <typename T>
void remove1(T& num)
{
   num -= 1; 
}

template <typename T>
void square(T& num)
{
   num *= num; 
}

template <typename T>
void addWord(T& string)
{
    string += "YEAAAAA";
}

template <typename T>
void print(T& element)
{
    std::cout << element << " "; 
}


int main()
{
#if 1
    int arr[] = {1, 2, 3, 4, 5};
    size_t len = sizeof(arr) / sizeof(int);
    std::cout << "arr len = "<< len << std::endl;

    std::cout << "BEFORE:" << std::endl;
    for (size_t i = 0; i < len; i += 1)
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    std::cout << std::endl; 

   // ::iter(arr, len, square);
    //std::cout << "Using iter square" << std::endl;

    ::iter(arr, len, remove1);
    std::cout << "Using iter remove1" << std::endl;

    //::iter(arr, len, add1);
    //std::cout << "Using iter add1" << std::endl;

    std::cout << "AFTER: " << std::endl;
    for (size_t i = 0; i < len; i += 1)
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    return (0);
#else
    std::string arr[] = {"salut", "ca", "va", "la miss"};
    size_t len = 4;
    std::cout << "BEFORE: " << std::endl;
    for (size_t i = 0; i < len; i += 1)
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;

    ::iter(arr, len, addWord);
    std::cout << "\nUsing iter addWord\n" << std::endl;
    
    std::cout << "AFTER: " << std::endl;
    ::iter(arr, len, print);

#endif
}
