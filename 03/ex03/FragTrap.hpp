/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:32:43 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/10 15:52:46 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        void highFivesGuys(void) const;
        virtual std::string getName() const;
        void attack(const std::string& target); 

        FragTrap();
        FragTrap(const std::string &name);
        FragTrap(const FragTrap& copy);
        FragTrap& operator=(FragTrap& copy);
        ~FragTrap();
};


#endif
