/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:27:41 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/13 17:25:08 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Colors.hpp"
#include "Dog.hpp"
#include <iostream>

std::string Dog::getType() const
{
    return (this->type);
}

void Dog::makeSound() const
{
    std::cout << "WAF WAF WAF WAF" << std::endl;
}

Dog::Dog() : Animal() 
{
    this->dogBrain = new Brain();
    this->type = "Dog";
    std::cout << GREEN << "Dog's Default Constructor" << RESET << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
    this->dogBrain = new Brain;
    *this->dogBrain = *(copy.dogBrain);
    this->type = copy.type;
    std::cout << "Dog's Copy Constructor" << type << std::endl;
}

Dog& Dog::operator=(const Dog& copy)
{
    if (this != &copy)
    {
        this->dogBrain = new Brain; 
        *this->dogBrain = *(copy.dogBrain);
        this->type = copy.type;
    }
    return (*this);
}

Dog::~Dog()
{
    delete dogBrain;
    std::cout << RED << "Dog's Destructor called" << RESET << std::endl;
}
