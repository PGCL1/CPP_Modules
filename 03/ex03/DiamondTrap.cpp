/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:48:51 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/10 15:44:55 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap default constructor" << std::endl; 
}

DiamondTrap::DiamondTrap(const std::string name) :  ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{ 
    this->name = name;
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& _copy) : ScavTrap(_copy), FragTrap(_copy)
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

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() const
{
    std::cout << "DiamondTrap's name = " << DiamondTrap::name << "\n"
        << "ClapTrap's name =" << ClapTrap::name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << RED << "DiamondTrap has ended his existence in order for G to make it to CPP 04" << RESET << std::endl;
}
