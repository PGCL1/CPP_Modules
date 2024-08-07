#ifndef  CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "Colors.hpp"
#include <iostream>
#include <string>

class ClapTrap {
	protected:
		std::string name;
		unsigned int hitPoints;
		unsigned int energyPoints;
		unsigned int attackDamage;
	public:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
        unsigned int getAttackDamage() const;

		ClapTrap();
		ClapTrap(const std::string& _name);
		ClapTrap(const ClapTrap& _f);
		ClapTrap& operator=(ClapTrap& copy);
		~ClapTrap();
};

#endif

