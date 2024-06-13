/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:17:23 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/13 17:25:23 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Colors.hpp"
#include "Cat.hpp"
#include <iostream>

std::string Cat::getType() const
{
    return (this->type);
}

void Cat::makeSound() const
{
    std::cout << "MIAW MIAW MIAW MIAW" << std::endl;
}

Cat::Cat() : Animal() 
{
    this->catBrain = new Brain();
    this->type = "Cat";
    std::cout << GREEN << "Cat's Default Constructor" << RESET << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
    this->catBrain = new Brain;
    *this->catBrain = *(copy.catBrain);
    this->type = copy.type;
    std::cout << "Cat's Copy Constructor" << std::endl;
}

Cat& Cat::operator=(const Cat& copy)
{
    if (this != &copy)
    {
        this->catBrain = new Brain;
        *this->catBrain = *(copy.catBrain);
        this->type = copy.type;
    }
    return (*this);
}

Cat::~Cat() 
{
    delete catBrain;
    std::cout << RED << "Cat's Destructor called" << RESET << std::endl;
}
