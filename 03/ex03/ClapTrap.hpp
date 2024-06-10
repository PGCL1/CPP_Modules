#ifndef  CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "Colors.hpp"
#include <iostream>
#include <string>

class AClapTrap {
	protected:
		std::string name;
		unsigned int hitPoints;
		unsigned int energyPoints;
		unsigned int attackDamage;
	public:
		virtual void attack(const std::string& target) = 0;
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
        unsigned int getAttackDamage() const;

		AClapTrap();
		AClapTrap(const std::string& _name);
		AClapTrap(const AClapTrap& _f);
		AClapTrap& operator=(AClapTrap& copy);
		~AClapTrap();
};

#endif

