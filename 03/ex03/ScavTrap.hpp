/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 18:10:59 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/08 21:08:21 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
        void guardGate() const;
        virtual std::string getName() const;
        void print() const;
        void attack(const std::string& target); 

        ScavTrap(const std::string &name);
        ScavTrap(const ScavTrap& copy);
        ScavTrap& operator=(ScavTrap& copy);
        ~ScavTrap();
};

# endif
