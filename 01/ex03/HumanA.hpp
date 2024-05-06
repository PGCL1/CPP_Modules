/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:56:27 by glacroix          #+#    #+#             */
/*   Updated: 2024/03/12 16:36:25 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    Weapon &choice;
    std::string name;
    
    public:
    void attack();

    HumanA(std::string const name, Weapon &_choice);
    ~HumanA();
};

#endif