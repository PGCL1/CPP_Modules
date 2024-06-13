/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:15:34 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/13 17:26:53 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
    Animal *zoo[10];
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            zoo[i] = new Dog();
        else
            zoo[i] = new Cat();
        std::cout << "This Animal is a " << zoo[i]->getType() << " and makes this sound: ";
        zoo[i]->makeSound();
        std::cout << std::endl;
    }
    for (int i = 0; i < 10; i++)
    {
        delete zoo[i];
        std::cout << std::endl; 
    }
    return 0;
}
