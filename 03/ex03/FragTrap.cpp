/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:35:10 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/10 15:58:17 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap default constructor" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
	std::cout << GREEN << "FragTrap is born and well" << RESET << std::endl; 
}

void FragTrap::highFivesGuys(void) const
{
    std::cout << "Who who WHO WANTS A HIGHFIVE??" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (this->hitPoints <= 0)
    {
        std::cout << "FragTrap " << this->name 
            << " is dead, it cannot attack" << this->name << std::endl;
        return;
    }
	if (!this->energyPoints)
	{
        std::cout << "FragTrap has no energy points left, it cannot do anything" << std::endl;
        return;
    }
    this->energyPoints -= 1;
    std::cout << "FragTrap " << this->name << " attacks " << target
        << ", causing " << this->getAttackDamage() << " points of damage" <<  std::endl;
    
}

std::string FragTrap::getName() const
{
    return (this->name);
}

FragTrap::FragTrap(const FragTrap& _f) : ClapTrap(_f)
{
	std::cout << "FragTrap copying attributes" << std::endl;
	this->name = _f.name;
	this->hitPoints = _f.hitPoints; 
	this->energyPoints = _f.energyPoints;
	this->attackDamage = _f.attackDamage;
}

FragTrap &FragTrap::operator=(FragTrap& copy)
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

FragTrap::~FragTrap() 
{
    std::cout << RED << "FragTrap " << this->name
        << " passed away, sniff. SO LONG FRIEND" << RESET << std::endl;
}

