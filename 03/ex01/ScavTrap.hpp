/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 18:10:59 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/10 15:37:08 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        void guardGate() const;
        std::string getName() const;
        void print() const;
        void attack(const std::string& target); 

        ScavTrap();
        ScavTrap(const std::string &name);
        ScavTrap(const ScavTrap& copy);
        ScavTrap& operator=(ScavTrap& copy);
        ~ScavTrap();
};

# endif
