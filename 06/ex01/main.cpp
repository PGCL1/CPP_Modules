/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:46:53 by glacroix          #+#    #+#             */
/*   Updated: 2024/07/24 16:46:53 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"
#include "Serializer.hpp"
#include <stdint.h>
#include <cstring>

/*struct Test
{
    int a;
    int b;
    int c;
};*/

struct Test
{
    char a;
    char b;
    char c;
    char d;
};


int main()
{
    // 0 0 00000101 00111001
    // rw -> [][][][] [][][][]
    int rw = 1337;
    Test t = *(Test*)&rw;

    std::cout << (int)t.a << std::endl;


    return 0;
#if 0
      Data myStruct;
      //void *random;
 
    uintptr_t value = Serializer::serialize(&myStruct);
    std::cout << "The value of myStruct is " << value << std::endl;

    Data* anotherStruct = reinterpret_cast<Data*>(value);
    std::cout << "The address of myStruct is: " << &myStruct << std::endl;
    std::cout << "The address of anotherStruct is: " << anotherStruct << std::endl;
    std::cout << "Result: " << (memcmp(anotherStruct, &myStruct, sizeof(*anotherStruct)) == 0
                ? "Addresses are identical"
                : "Addresses are different") << std::endl;
#endif
    return 0;
}
