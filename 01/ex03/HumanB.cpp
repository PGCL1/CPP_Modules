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

void HumanB::setWeapon(Weapon *choice)
{
    if (choice)
        std::cout << this->name << " now has a new weapon: " << choice->getType() << std::endl;
    else
        std::cout << this->name << " was given no weapon" << std::endl;
    this->choice = choice;
}

void HumanB::attack()
{
    if (this->choice == NULL)
    {
        std::cout << this->name << " attacks with their hands" << std::endl;
        return ;
    }
    std::cout << this->name << " attacks with their " << this->choice->getType() << std::endl;
}

HumanB::~HumanB() 
{ 
    std::cout << this->name << " was destroyed" << std::endl;
}