#include "ClapTrap.hpp"

AClapTrap::AClapTrap(const std::string& _name)
{
	this->name = _name;
	this->hitPoints = 10; 
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << GREEN <<"AClapTrap " << this->name << " has been initialized" 
		RESET << std::endl;
}

unsigned int AClapTrap::getAttackDamage() const
{
    return this->attackDamage;
}

void AClapTrap::attack(const std::string& target) {}

void AClapTrap::takeDamage(unsigned int amount)
{
	this->attackDamage += amount;
    this->hitPoints -= amount;
	this->energyPoints -= 1;
	std::cout << "AClapTrap " << this->name << " took " << this->getAttackDamage()
        << " points of damage, its life points are now at " << this->hitPoints<< std::endl;
}

void AClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoints <= 0)
    {
        std::cout << "Claptrap " << this->name
            << " died in battle\t-----\tALL HAIL TO CLAPTRAP " << this->name << std::endl;
        return;
    }
	if (this->energyPoints && this->hitPoints)
	{
		this->energyPoints -= 1;
		this->hitPoints += amount;
		std::cout << "AClapTrap " << this->name  << " healed " << amount
            << " points itself, its life is now at " << this->hitPoints << std::endl;
	}
}

AClapTrap::AClapTrap(const AClapTrap& _f)
{
	std::cout << "AClapTrap copying attributes" << std::endl;
	this->name = _f.name;
	this->hitPoints = _f.hitPoints; 
	this->energyPoints = _f.energyPoints;
	this->attackDamage = _f.attackDamage;
}

AClapTrap &AClapTrap::operator=(AClapTrap& copy)
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

AClapTrap::~AClapTrap() 
{
	std::cout << RED << "AClapTrap " << this->name << " has been DESTRUCTED" << RESET << std::endl;
}
