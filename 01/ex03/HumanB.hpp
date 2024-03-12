/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:56:27 by glacroix          #+#    #+#             */
/*   Updated: 2024/03/12 15:21:10 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
    Weapon choice;
    std::string name;
    
    public:
    void attack();
    void setWeapon(Weapon &choice);

    HumanB(std::string const name);
    ~HumanB();
};

#endif