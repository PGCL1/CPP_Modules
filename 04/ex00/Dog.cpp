/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:27:41 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/12 12:33:53 by glacroix         ###   ########.fr       */
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

Dog::Dog() 
{
    this->type = "Dog";
    std::cout << GREEN << "Dog's Default Constructor" << RESET << std::endl;
}

Dog::Dog(const Dog& copy)
{
    this->type = copy.type;
    std::cout << "Dog's Copy Constructor" << type << std::endl;
}

Dog& Dog::operator=(const Dog& copy)
{
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << RED << "Dog's Destructor called" << RESET << std::endl;
}
