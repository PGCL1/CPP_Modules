/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:15:34 by glacroix          #+#    #+#             */
/*   Updated: 2024/07/01 11:17:03 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
    //uncomment these lines to test ex02 where AAnimal cannot be instantiated
    // AAnimal test;
    // std::cout << test.makeSound() << std::endl;
    //

    AAnimal *zoo[10];
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
    
    Dog dogTest;
    Dog copyDog(dogTest);
    Dog test;
    
    test = dogTest; 

    Cat catTest;
    Cat copyCat(catTest);
    Cat test1;
    
    test1 = catTest; 

    return 0;
}
