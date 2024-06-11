/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:56:06 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/11 18:47:57 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

void Animal::makeSound()
{
    std::cout << "This animal makes an animal sound" << std::endl;
}

Animal::Animal() 
{
    this->type = "Animal";
    std::cout << "Animal's Default Constructor" << type << std::endl;
}

Animal::Animal(const Animal& copy)
{
     this->type = copy.type;
    std::cout << "Animal's Copy Constructor" << type << std::endl;
}

Animal& Animal::operator=(const Animal& copy)
{
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal's Destructor called" << type << std::endl;
}
