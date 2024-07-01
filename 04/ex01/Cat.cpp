/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:17:23 by glacroix          #+#    #+#             */
/*   Updated: 2024/07/01 11:13:19 by glacroix         ###   ########.fr       */
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
    std::cout << "\n---TO SHOW DEEP COPY---"<<std::endl;
    std::cout << "Address catBrain: " << catBrain << std::endl;
    std::cout << "Address copyBrain: " << copy.catBrain << std::endl;
    this->type = copy.type;
    std::cout << "Cat's Copy Constructor\n" << std::endl;
}

Cat& Cat::operator=(const Cat& copy)
{
    if (this != &copy)
    {
        delete catBrain;
        this->catBrain = new Brain;
        *this->catBrain = *(copy.catBrain);
        std::cout << "\n---TO SHOW DEEP COPY---"<<std::endl;
        std::cout << "Address catBrain: " << catBrain << std::endl;
        std::cout << "Address copyBrain: " << copy.catBrain << std::endl;
        this->type = copy.type;
    }
    return (*this);
}

Cat::~Cat() 
{
    delete catBrain;
    std::cout << RED << "Cat's Destructor called" << RESET << std::endl;
}
