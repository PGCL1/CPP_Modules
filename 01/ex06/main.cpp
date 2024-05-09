/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 17:24:21 by glacroix          #+#    #+#             */
/*   Updated: 2024/03/16 12:45:06 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "ERROR: enter a filter (DEBUG, INFO, WARNING, ERROR)" << std::endl;
		return (1);
	}
	Harl test;
	std::string input = argv[1];
	std::cout << std::endl;
	test.complain(input);
	return (0);
}
