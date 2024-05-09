/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:56:40 by glacroix          #+#    #+#             */
/*   Updated: 2024/05/02 12:05:26 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int quantity = -1;
    if (quantity < 0)
    {
        std::cout << "ERROR: quantity should be a positive integer" << std::endl;
        return (1);
    }
    Zombie *test = zombieHorde(quantity, "Zombie Clone");
    for (int i = 0; i < quantity; i++)
        test[i].announce();
    std::cout << std::endl;
    delete [] test;
    return 0;
}
