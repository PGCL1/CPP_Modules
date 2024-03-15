/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 17:24:21 by glacroix          #+#    #+#             */
/*   Updated: 2024/03/15 17:42:24 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl test;

	std::cout << "TEST LEVEL: " << std::endl;
	test.complain("test");

	std::cout << "INFO LEVEL: " << std::endl;
	test.complain("INFO");

	std::cout << "WARNING LEVEL: " << std::endl;
	test.complain("WARNING");

	std::cout << "ERROR LEVEL: " << std::endl;
	test.complain("ERROR");

	return (0);
}
