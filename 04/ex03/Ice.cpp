/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:55:04 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/14 18:01:18 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice(std::string const& type) : AMateria(type)
{
    this->type = type;
}

Ice::Ice() : AMateria()
{
    std::cout << "Ice Materia Default Constructor" << std::endl;
}

Ice::Ice(const Ice& copy) : AMateria(copy)
{
    
}

AMateria* clone() const
{

}
