/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:01:20 by glacroix          #+#    #+#             */
/*   Updated: 2024/03/12 15:26:41 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string const name) 
{ 
    this->name = name;
}

void HumanB::setWeapon(Weapon &choice)
{
    this->choice = choice;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->choice.getType() << std::endl;
}

HumanB::~HumanB() 
{ 
    std::cout << this->name << " was destroyed" << std::endl;
}