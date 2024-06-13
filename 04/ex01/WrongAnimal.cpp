/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:00:34 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/13 12:11:29 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "Colors.hpp"
#include <iostream>

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "This animal makes a WRONG animal sound" << std::endl;
}

WrongAnimal::WrongAnimal() 
{
    this->type = "WrongAnimal";
    std::cout << GREEN << "WrongAnimal's Default Constructor" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
    this->type = copy.type;
    std::cout << "WrongAnimal's Copy Constructor" << type << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << RED << "WrongAnimal's Destructor called" << RESET << std::endl;
}
