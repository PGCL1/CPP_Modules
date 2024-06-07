/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:32:43 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/07 16:35:04 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        void highFivesGuys(void) const;
        std::string getName() const;
        void print() const;
        void attack(const std::string& target); 

        FragTrap(const std::string &name);
        FragTrap(const FragTrap& copy);
        FragTrap& operator=(FragTrap& copy);
        ~FragTrap();
};


#endif
