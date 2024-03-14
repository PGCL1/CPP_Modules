/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:24:17 by glacroix          #+#    #+#             */
/*   Updated: 2024/03/14 13:11:53 by glacroix         ###   ########.fr       */
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
	std::fstream file(argv[1], std::fstream::in | std::fstream::out);
	std::string text;
	std::string s1 (argv[2]);
	std::string s2 (argv[3]);
	std::string newline;
	if (file.is_open())
	{
		std::cout << LGREEN << "This is the text in: (" << argv[1] << ")\n" << RESET << std::endl;
		while (!file.eof())
		{
			//copying one line at a time in text
			getline(file, text);
			std::size_t found = text.find(s1);
			//std::cout << LGREEN << "Line: " << RESET << "`" << text << "`\t\t\t";
  			if (found != std::string::npos)
			{
				int pos = text.find(s1);
				text.erase(text.find(s1), s1.size());
				newline = text.insert(pos, s2);
				//need to add the newline.back('\n'); ?? maybe
				//not managing to write to file 
				//text.erase(0, text.size());
				//file << newline;
				std::cout << LGREEN << "NEW: " << RESET << "`" << text << std::endl;	
			}
			else
				std::cout << "not found: " << found << std::endl;
		}
		file.close();
		return (0);
	}
	else if (file.fail())
		std::cout << RED << "\nERROR: " << RESET 
			<< "Non-existent file or Missing permissions for '" 
			<< argv[1] << "'\n" << std::endl;
	return 0;
}

#endif