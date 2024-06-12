/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:15:34 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/12 17:42:49 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
    const Animal* meta = new Animal();
    std::cout << std::endl;

    const Animal* j = new Dog();
    std::cout << std::endl;

    const Animal* i = new Cat();
    std::cout << std::endl;

    std::cout << "\nThis animal is a "<< j->getType() << "!" << std::endl;
    std::cout << "This animal is a "<< i->getType() << "!\n" << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    std::cout << std::endl;

    delete i;
    std::cout << std::endl;

    delete j;
    std::cout << std::endl;

    delete meta;
    std::cout << std::endl;

    return 0;
}
