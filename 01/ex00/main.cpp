/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:58:17 by glacroix          #+#    #+#             */
/*   Updated: 2024/05/01 17:25:00 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *test = newZombie("Santi");
	test->announce();
	test->~Zombie();

	std::cout << std::endl;

	Zombie *test1 = newZombie("Augustin");
	test1->announce();
	test1->~Zombie();

	std::cout << std::endl;

	Zombie *test2 = newZombie("G");
	test2->announce();
	test2->~Zombie();

	delete test;
	delete test1;
	delete test2;
	std::cout << std::endl;

	randomChump("Vio");
	std::cout << std::endl;
	return 0;
}
