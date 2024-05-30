#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name)
{
	this->name = _name;
	this->hitPoints = 10; 
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << GREEN <<"ClapTrap " << this->name << " has been initialized" 
		RESET << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap& copy)
{
	if (this != *copy)
	{
		this->name = copy.name;
		this->hitPoints = copy.hitPoints; 
		this->energyPoints = copy.energyPoints;
		this->attackDamage = copy.attackDamage;
	}
}

ClapTrap::ClapTrap(const ClapTrap& _f)
{
	std::cout << "ClapTrap " << this->name << "copying attributes of ClapTrap " << _f.name << std::endl;
	this->name = _f.name;
	this->hitPoints = _f.hitPoints; 
	this->energyPoints = _f.energyPoints;
	this->attackDamage = _f.attackDamage;
	std::cout << "ClapTrap finished copying attributes" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints && this->hitPoints)
	{
		this->energyPoints -= 1;
		std::cout << "ClapTrap " << this->name << "attacks " << target <<
		"causing 1 point of damage" << std::endl;
	}
	//figure out how to make target loose energy points
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->attackDamage += 1;
	this->energyPoints -= amount;
	std::cout << "ClapTrap " << this->name << " took 1 point of damage"
		<< ", its life points are now at " << this->energyPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints)
	{
		this->energyPoints -= 1;
		this->hitPoints += amount;
		std::cout << "ClapTrap " << this->name  << "healed itself, its damage is now at "
			<< this->attackDamage << std::endl;
	}
}

ClapTrap::~ClapTrap() 
{
	std::cout << RED << "ClapTrap " << this->name << " has been DESTRUCTED" 
		RESET << std::endl;
}
