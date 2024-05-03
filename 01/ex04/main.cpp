/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:08:17 by glacroix          #+#    #+#             */
/*   Updated: 2024/05/02 13:36:20 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int inputHandling(std::string &s1)
{

	if (s1.empty())
	{
		std::cout << RED << "ERROR: " << RESET << "The second argument cannot be empty" << std::endl;
		return (1);
	}
	if (s1.find("\n") != std::string::npos)
		s1.erase(s1.find("\n"), 1);
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << RED << "\nERROR: " << RESET << "params are <filename> <string1> <string2>\n" << RESET << std::endl;
		return 1;
	}
	std::ifstream infile(argv[1]);
	std::string filename(argv[1]);
	std::string new_filename = filename.c_str(); 
	new_filename +=	".replace";
	std::ofstream outfile(new_filename.c_str());
	
	size_t pos;
	std::string line;
	std::string newline;
	
	std::string s1 (argv[2]);
	std::string s2 (argv[3]);
	if (s1 == s2)
	{
		while (getline(infile, line))
			outfile << line.append("\n");
		infile.close();
		return (0);
	}
	if (inputHandling(s1))
		return (2);
	if (infile.is_open())
	{
		while (getline(infile, line))
		{
			pos = line.find(s1, 0);
			if (pos == std::string::npos)
			{
				outfile << line.append("\n");
				continue;
			}
			while (pos != std::string::npos)
			{
				
				line.erase(pos, s1.size());
				newline = line.insert(pos, s2);
				pos = line.find(s1);
			}
			outfile << newline << std::endl;
		}
		infile.close();
		return (0);
	}
	else
	{
		std::cout << RED << "\nERROR: " << RESET 
			<< "Non-existent file or Missing permissions for '" 
			<< argv[1] << "'\n" << std::endl;
		return (3);
	}
	return (0);
}
