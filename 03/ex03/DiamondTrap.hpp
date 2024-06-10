/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:45:45 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/10 12:19:37 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string name;
    public:
        virtual std::string getName() const;
        void whoAmI() const;
        void attack(const std::string& target);

        DiamondTrap(const std::string name);
        DiamondTrap(const DiamondTrap& copy);
        DiamondTrap& operator=(DiamondTrap& copy);
        ~DiamondTrap();

};

#endif

