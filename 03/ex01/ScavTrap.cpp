/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 18:19:21 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/05 18:25:35 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
	std::cout << MAGENTA <<"ScavTrap " << this->name << " is alive" << RESET << std::endl; 
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->hitPoints <= 0)
    {
        std::cout << "Scavtrap " << this->name << " is dead, it cannot attack" << this->name << std::endl;
        return;
    }
	if (this->energyPoints && this->hitPoints)
	{
		this->energyPoints -= 1;
		std::cout << "ScavTrap " << this->name << " attacks " << target 
            << ", causing " << this->getAttackDamage() << " points of damage" <<  std::endl;
	}
    
}

void ScavTrap::print()
{
    std::cout << "\nScavTrap " << this->name << " has the following attributes:\n"
        << "- hitPoints = " << this->hitPoints << "\n"
        << "- energyPoints = " << this->energyPoints << "\n"
        << "- attackDamage = " << this-> attackDamage << "\n" << std::endl;
}

std::string ScavTrap::getName()
{
    return (this->name);
}

ScavTrap::~ScavTrap() 
{
    std::cout << ORANGE << "ScavTrap " << this->name
        << " has been destroyed and as a result is dead" << RESET << std::endl;
}
