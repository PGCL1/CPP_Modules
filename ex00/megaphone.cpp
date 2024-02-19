/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:37:15 by glacroix          #+#    #+#             */
/*   Updated: 2024/02/16 13:19:22 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <string>
#include <iostream>

int main(int argc, char **argv)
{
	int i = 1;
	std::string input;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	for (; i < argc; i++)
	{
		input = argv[i];
		for (size_t j = 0; j < input.size(); j++)
		{
			char c = std::toupper(input[j]);
			std::cout << c;
		}
	}
	std::cout << std::endl;
	return (0);
}

