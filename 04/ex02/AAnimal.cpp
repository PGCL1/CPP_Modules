/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:56:06 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/13 17:42:09 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Colors.hpp"
#include <iostream>

std::string AAnimal::getType() const
{
    return (this->type);
}

void AAnimal::makeSound() const
{
    std::cout << "This animal makes an animal sound" << std::endl;
}

AAnimal::AAnimal() 
{
    this->type = "AAnimal";
    std::cout << GREEN << "AAnimal's Default Constructor" << RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal& copy)
{
    this->type = copy.type;
    std::cout << "AAnimal's Copy Constructor" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& copy)
{
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

AAnimal::~AAnimal()
{
    std::cout << RED << "AAnimal's Destructor called" << RESET << std::endl;
}
