/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:24:17 by glacroix          #+#    #+#             */
/*   Updated: 2024/03/14 19:16:18 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

#if 1

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << RED << "\nERROR: " << RESET << "params are <filename> <string1> <string2>\n" << RESET << std::endl;
		return 1;
	}
	std::ifstream infile(argv[1]);
	std::string filename(argv[1]);
	std::ofstream outfile(filename.append(".replace"));
	
	int pos;
	std::string line;
	std::string newline;
	
	std::string s1 (argv[2]);
	std::string s2 (argv[3]);
	if (infile.is_open())
	{
		std::cout << LGREEN << "This is the text in: (" << argv[1] << ")\n" << RESET << std::endl;
		while (!infile.eof())
		{
			//copying one line at a time in text
			getline(infile, line);
			std::size_t found = line.find(s1);
			//std::cout << LGREEN << "Line: " << RESET << "`" << line << "`\t\t\t";
  			if (found != std::string::npos)
			{
				test:
				pos = line.find(s1);
				line.erase(line.find(s1), s1.size());
				newline = line.insert(pos, s2);
				if (line.find(s1) != std::string::npos)
					goto test;
				newline.append("\n"); 
				outfile << newline;
				std::cout << LGREEN << "NEW: " << RESET << "`" << newline << std::endl;	
			}
			else
				std::cout << "not found: " << found << std::endl;
		}
		infile.close();
		return (0);
	}
	else if (infile.fail())
		std::cout << RED << "\nERROR: " << RESET 
			<< "Non-existent file or Missing permissions for '" 
			<< argv[1] << "'\n" << std::endl;
	return 0;
}

#endif