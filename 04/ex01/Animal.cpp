/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:56:06 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/13 16:45:42 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Colors.hpp"
#include <iostream>

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << "This animal makes an animal sound" << std::endl;
}

Animal::Animal() 
{
    this->type = "Animal";
    std::cout << GREEN << "Animal's Default Constructor" << RESET << std::endl;
}

Animal::Animal(const Animal& copy)
{
    this->type = copy.type;
    std::cout << "Animal's Copy Constructor" << std::endl;
}

Animal& Animal::operator=(const Animal& copy)
{
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << RED << "Animal's Destructor called" << RESET << std::endl;
}
