/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:44:07 by glacroix          #+#    #+#             */
/*   Updated: 2024/02/26 18:09:44 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

int Phonebook::executeInput(std::string input, int &count)
{
	if (!input.compare("ADD"))
	{
		this->Contacts[count].createContact();
		std::cout << "name of n " << count << " = " << this->Contacts[count].getFirstName() << std::endl;
		count++;
		return (0);
	}
	else
		exit(1);
	/*else if (!input.compare("SEARCH"))
	{
		this->searchContact();
		return (0);
	}*/
}


//need to take options from user input
int main()
{
	Phonebook myFriends;
	std::string userInput;
	int	count = 0;
	while (1)
	{
		std::cout << "Please select one of the following options: ADD, SEARCH, EXIT" << std::endl;
		getline(std::cin, userInput);
		if (!userInput.compare("ADD") || !userInput.compare("SEARCH") || !userInput.compare("EXIT"))
		{
			myFriends.executeInput(userInput, count);
		}
		else
		{
			std::cout << RED << "Accepted options are ADD, SEARCH, EXIT!" << RESET << std::endl;
			continue;
		}
	}
	return 0;
}
