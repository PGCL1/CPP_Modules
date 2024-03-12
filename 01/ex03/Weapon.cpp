/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:07:27 by glacroix          #+#    #+#             */
/*   Updated: 2024/03/12 16:24:25 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string type)
{
    this->type = type;
    //this->setType(type);
    return ;
}

void Weapon::setType(std::string const &type)
{
    this->type = type;
}

std::string const& Weapon::getType()
{
    return this->type;
}

Weapon::~Weapon()
{
    std::cout << "The weapon (" << type << ") was destroyed" << std::endl;
}


