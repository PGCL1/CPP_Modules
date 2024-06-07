/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:32:43 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/07 15:37:31 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        void highFivesGuys(void);
        std::string getName();
        void print();
        void attack(const std::string& target); 

        FragTrap(const std::string &name);
        FragTrap(const FragTrap& copy);
        FragTrap& operator=(FragTrap& copy);
        ~FragTrap();
};


#endif
