/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:45:45 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/08 21:18:43 by glacroix         ###   ########.fr       */
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

        DiamondTrap(const std::string name);
        DiamondTrap(const DiamondTrap& copy);
        DiamondTrap& operator=(DiamondTrap& copy);
        ~DiamondTrap();

};

#endif

