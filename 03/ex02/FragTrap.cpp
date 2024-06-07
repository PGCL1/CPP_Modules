/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:35:10 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/07 15:44:36 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
	std::cout << GREEN << "FragTrap " << this->name << " is born and well" << RESET << std::endl; 
}

void FragTrap::highFivesGuys(void)
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

void FragTrap::print()
{
    std::cout << "\nFragTrap " << this->name << " has the following attributes:\n"
        << "- hitPoints = " << this->hitPoints << "\n"
        << "- energyPoints = " << this->energyPoints << "\n"
        << "- attackDamage = " << this-> attackDamage << "\n" << std::endl;
}

std::string FragTrap::getName()
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

