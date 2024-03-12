/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:01:20 by glacroix          #+#    #+#             */
/*   Updated: 2024/03/12 16:29:47 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const name, Weapon &_choice) : choice(_choice)
{
    this->name = name;
    //weapon is set in constructor
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->choice.getType() << std::endl;
}

HumanA::~HumanA()
{
    std::cout << this->name << " was destroyed" << std::endl;
}