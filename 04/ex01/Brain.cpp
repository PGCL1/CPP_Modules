/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:48:55 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/13 11:55:12 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Colors.hpp"
#include <iostream>

Brain::Brain() 
{
    std::cout << GREEN << "Brain's Default Constructor" << RESET << std::endl;
}

Brain::Brain(const Brain& copy)
{
    this-> = copy.type;
    std::cout << "Brain's Copy Constructor" << type << std::endl;
}

Brain& Brain::operator=(const Brain& copy)
{
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

Brain::~Brain()
{
    std::cout << RED << "Brain's Destructor called" << RESET << std::endl;
}
