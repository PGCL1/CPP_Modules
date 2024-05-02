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
    Zombie *test = zombieHorde(4, "this is a test");
    for (int i = 0; i < 4; i++)
        test->announce();
    delete [] test;
    return 0;
}
