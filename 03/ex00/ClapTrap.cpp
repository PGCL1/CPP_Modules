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

unsigned int ClapTrap::getAttackDamage() const
{
    return this->attackDamage;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->hitPoints <= 0)
    {
        std::cout << "Claptrap " << this->name << " is dead, it cannot attack" << this->name << std::endl;
        return;
    }
	if (this->energyPoints && this->hitPoints)
	{
		this->energyPoints -= 1;
		std::cout << "ClapTrap " << this->name << "attacks " << target 
            << "causing " << this->getAttackDamage() << "points of damage" <<  std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->attackDamage += amount;
    this->hitPoints -= amount;
	this->energyPoints -= 1;
	std::cout << "ClapTrap " << this->name << " took " << this->getAttackDamage()
        << " points of damage, its life points are now at " << this->hitPoints<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
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
		std::cout << "ClapTrap " << this->name  << " healed " << amount
            << " points itself, its life is now at " << this->hitPoints << std::endl;
	}
}

ClapTrap::ClapTrap(const ClapTrap& _f)
{
	std::cout << "ClapTrap " << this->name << " copying attributes of ClapTrap " << _f.name << std::endl;
	this->name = _f.name;
	this->hitPoints = _f.hitPoints; 
	this->energyPoints = _f.energyPoints;
	this->attackDamage = _f.attackDamage;
	std::cout << "ClapTrap finished copying attributes" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap& copy)
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

ClapTrap::~ClapTrap() 
{
	std::cout << RED << "ClapTrap " << this->name << " has been DESTRUCTED" << RESET << std::endl;
}
