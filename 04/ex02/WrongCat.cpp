/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:59:16 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/13 11:59:51 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Colors.hpp"
#include "WrongCat.hpp"
#include <iostream>

std::string WrongCat::getType() const
{
    return (this->type);
}

void WrongCat::makeSound() const
{
    std::cout << "MIAW MIAW MIAW MIAW" << std::endl;
}

WrongCat::WrongCat() : WrongAnimal() 
{
    this->type = "WrongCat";
    std::cout << GREEN << "WrongCat's Default Constructor" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
    this->type = copy.type;
    std::cout << "WrongCat's Copy Constructor" << type << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

WrongCat::~WrongCat() 
{
    std::cout << RED << "WrongCat's Destructor called" << RESET << std::endl;
}
