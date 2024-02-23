/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:44:07 by glacroix          #+#    #+#             */
/*   Updated: 2024/02/23 18:41:47 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"


//need to take options from user input
int main()
{
	std::string userInput;
	while (1)
	{
		std::cout << "Please select one of the following options: ADD, SEARCH, EXIT" << std::endl;
		getline(std::cin, userInput);
		if (!userInput.compare("ADD") || !userInput.compare("SEARCH") || !userInput.compare("EXIT"))
		{
			std::cout << "Correct input" << std::endl;
			//executeInput()
			exit(1);	
		}
		else
		{
			std::cout << RED << "Accepted options are ADD, SEARCH, EXIT!" << RESET << std::endl;
			continue;
		}
	}
	return 0;
}
