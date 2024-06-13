/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:27:41 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/13 17:40:34 by glacroix         ###   ########.fr       */
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

Dog::Dog() : AAnimal() 
{
    this->dogBrain = new Brain();
    this->type = "Dog";
    std::cout << GREEN << "Dog's Default Constructor" << RESET << std::endl;
}

Dog::Dog(const Dog& copy) : AAnimal(copy)
{
    this->dogBrain = new Brain;
    *this->dogBrain = *(copy.dogBrain);
    std::cout << "\n---TO SHOW DEEP COPY---"<<std::endl;
    std::cout << "Address dogBrain: " << dogBrain << std::endl;
    std::cout << "Address copyBrain: " << copy.dogBrain << std::endl;
    this->type = copy.type;
    std::cout << "Dog's Copy Constructor\n" << std::endl;
}

Dog& Dog::operator=(const Dog& copy)
{
    if (this != &copy)
    {
        this->dogBrain = new Brain; 
        *this->dogBrain = *(copy.dogBrain);
        std::cout << "\n---TO SHOW DEEP COPY---"<<std::endl;
        std::cout << "Address dogBrain: " << dogBrain << std::endl;
        std::cout << "Address copyBrain: " << copy.dogBrain << std::endl;
        this->type = copy.type;
    }
    return (*this);
}

Dog::~Dog()
{
    delete dogBrain;
    std::cout << RED << "Dog's Destructor called" << RESET << std::endl;
}
