/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:56:40 by glacroix          #+#    #+#             */
/*   Updated: 2024/03/11 18:20:09 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void ft_leaks()
{
    system("leaks -q zombiehordessss");
}

int main()
{
   atexit(ft_leaks);
    Zombie *test = zombieHorde(4, "this is a test");
    for (int i = 0; i < 4; i++)
        test->announce();
    delete [] test;
    return 0;
}