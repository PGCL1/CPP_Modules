/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:22:22 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/05 18:13:17 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    std::cout << ROSE << "\nI will create: Adri ScavTrap" << RESET << std::endl; 
    ScavTrap obj("Adri");

    //obj.print();
    obj.attack("a big boar");
    obj.guardGate();

    std::cout << ROSE << "\nI will create: Maria ScavTrap" << RESET << std::endl; 
    ScavTrap another("Maria");
    another = obj;
    another.print();

    std::cout << ROSE << "\nI will create: a Adri ScavTrap clone" << RESET << std::endl; 
    ScavTrap AdriClone(obj);
    AdriClone.print();

    return (0);
}
