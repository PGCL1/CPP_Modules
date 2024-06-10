/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:48:51 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/10 12:21:08 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() const
{
    std::cout << "DiamondTrap's name = " << this->getName() << "\n"
        << "ClapTrap's name =" << ClapTrap::name + "_clap_name" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& _copy) : FragTrap(name), ScavTrap(name)
{
    std::cout << "DiamondTrap copying attributes" << std::endl;
    this->name = _copy.name;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap& copy)
{
    if (this != &copy)
    {
        this->name = copy.name;
    }
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap has ended his existence in order for G to make it to CPP 04" << std::endl;
}
