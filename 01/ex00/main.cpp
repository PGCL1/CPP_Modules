/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:58:17 by glacroix          #+#    #+#             */
/*   Updated: 2024/03/07 12:15:47 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie test = newZombie("this is a test");
	Zombie test1 = newZombie("test 1");
	Zombie test2 = newZombie("test 2");
	Zombie test3 = newZombie("test 3");
	return 0;
}