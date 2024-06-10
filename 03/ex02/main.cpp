/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:22:22 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/10 18:54:51 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    std::cout << ROSE << "\nI will create: Adri FragTrap" << RESET << std::endl; 
    FragTrap obj("Adri");

    //obj.print();
    obj.attack("a big boar");
    obj.highFivesGuys();

    std::cout << ROSE << "\nI will create: Maria FragTrap" << RESET << std::endl; 
    FragTrap another("Maria");
    another = obj;
    another.print();

    std::cout << ROSE << "\nI will create: a Adri FragTrap clone" << RESET << std::endl; 
    FragTrap AdriClone(obj);
    AdriClone.print();

    return (0);
}
