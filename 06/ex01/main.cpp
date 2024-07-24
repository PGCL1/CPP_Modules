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
#include <assert.h>

int main()
{
      Data myStruct;
      //void *random;
 
    uintptr_t value = Serializer::serialize(&myStruct);
    std::cout << "The value of myStruct is " << value << std::endl;

    Data* anotherStruct = reinterpret_cast<Data*>(value);
    std::cout << "The address of myStruct is: " << &myStruct << std::endl;
    std::cout << "The address of anotherStruct is: " << anotherStruct << std::endl;
    std::cout << "If the addresses are identical, memcmp will give 0 (see below)\n\tResult: " 
        << memcmp(anotherStruct, &myStruct, sizeof(*anotherStruct)) << std::endl;
    return 0;
}
