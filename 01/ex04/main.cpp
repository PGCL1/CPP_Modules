/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:24:17 by glacroix          #+#    #+#             */
/*   Updated: 2024/03/13 16:41:19 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

#if 0

#include <iostream>
#include <string>

int main ()
{
  std::string buyer ("money");
  std::string seller ("goods");

  std::cout << "Before the swap, buyer has " << buyer << " and seller has " << seller << '\n';

  seller.swap (buyer);

  std::cout << " After the swap, buyer has " << buyer << " and seller has " << seller << '\n';

  return 0;
}

#else


int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << RED << "\nERROR: " << RESET << "params are <filename> <string1> <string2>\n" << RESET << std::endl;
		return 1;
	}
	std::fstream file(argv[1]);
	std::string text;
	std::string s1 (argv[2]);
	std::string s2 (argv[3]);
	if (file.is_open())
	{
		std::cout << LGREEN << "This is the text in: (" << argv[1] << ")\n" << RESET << std::endl;
		while (!file.eof())
		{
			//copying one line at a time in text
			getline(file, text);
			std::size_t found = text.find(s1);
			std::cout << LGREEN << "Line: " << RESET << "`" << text << "`\t\t\t";
  			if (found != std::string::npos)
				std::cout << "found at " << found << std::endl;
			else
				std::cout << "not found: " << found << std::endl;
		}
		file.close();
		return (0);
	}
	else if (file.fail())
		std::cout << RED << "\nERROR: " << RESET << "Non-existent file or Missing permissions for '" 
			<< argv[1] << "'\n" << std::endl;
	return 0;
}

#endif