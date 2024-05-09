/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:39:49 by glacroix          #+#    #+#             */
/*   Updated: 2024/05/02 12:17:40 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    Weapon club = Weapon("crude spiked club");
    
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();


    std::cout << std::endl;

    HumanB jim("Jim");
    jim.setWeapon(&club);
    jim.attack();
    jim.setWeapon(NULL);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();

    std::cout << std::endl;
    return 0;
}
