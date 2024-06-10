/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 18:19:21 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/10 15:58:06 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap default constructor" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
	std::cout << GREEN << "ScavTrap is alive" << RESET << std::endl; 
}

void ScavTrap::guardGate() const
{
    std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->hitPoints <= 0)
    {
        std::cout << "Scavtrap " << this->name 
            << " is dead, it's not going to move" << this->name << std::endl;
        return;
    }
	if (this->energyPoints && this->hitPoints)
	{
		this->energyPoints -= 1;
		std::cout << "ScavTrap " << this->name << " attacks with fear of retaliation " 
            << target << ", causing " << this->getAttackDamage() 
            << " points of damage" <<  std::endl;
	}
    
}

std::string ScavTrap::getName() const
{
    return (this->name);
}

ScavTrap::ScavTrap(const ScavTrap& _f) : ClapTrap(_f)
{
	std::cout << "ScavTrap copying attributes" << std::endl;
	this->name = _f.name;
	this->hitPoints = _f.hitPoints; 
	this->energyPoints = _f.energyPoints;
	this->attackDamage = _f.attackDamage;
}

ScavTrap &ScavTrap::operator=(ScavTrap& copy)
{
	if (this != &copy) 
    {
        this->name = copy.name;
		this->hitPoints = copy.hitPoints; 
		this->energyPoints = copy.energyPoints;
		this->attackDamage = copy.attackDamage;
	}
    return (*this);
}
ScavTrap::~ScavTrap() 
{
    std::cout << RED << "ScavTrap " << this->name
        << " has given its life for the greater good" << RESET << std::endl;
}
