/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:48:55 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/13 15:41:31 by glacroix         ###   ########.fr       */
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
    for (int i = 0; i < 100; i++)
    {
        const char *temp = copy.ideas[i].c_str();
        this->ideas[i].copy((char *)temp, copy.ideas[i].size());
    }
    std::cout << "Brain's Copy Constructor" << std::endl;
}

Brain& Brain::operator=(const Brain& copy)
{
    if (this != &copy)
    {
        for (int i = 0; i < 100; i++)
        {
            const char *temp = copy.ideas[i].c_str();
            this->ideas[i].copy((char *)temp, copy.ideas[i].size());
        }
    } 
    return (*this);
}

Brain::~Brain()
{
    std::cout << RED << "Brain's Destructor called" << RESET << std::endl;
}
