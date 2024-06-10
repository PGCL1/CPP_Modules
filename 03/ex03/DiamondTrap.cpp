/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:48:51 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/10 11:38:59 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string name) : AClapTrap(name)
{
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
}

void DiamondTrap::whoAmI() const
{
    std::cout << "DiamondTrap's name = " << this->getName() << "\n"
        << "ClapTrap's name =" << AClapTrap::name + "_clap_name" << std::endl;
}
