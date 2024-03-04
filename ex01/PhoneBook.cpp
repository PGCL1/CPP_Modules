/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:44:07 by glacroix          #+#    #+#             */
/*   Updated: 2024/03/04 16:39:55 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

//TODO: fix count error prints 1 when count is 0
void Phonebook::searchContact(int &count)
{
	if (count == 0)
	{
		std::cout << RED << "You don't have any contacts!" << RESET << std::endl;
		return ;
	}
	searchInstructions();
	for (int i = 0; i < count; i++)
	{
		std::cout << std::right << std::setw(10) << i << " | ";
		Contacts[i].showContactInfo();
	}
	std::cout << MAGENTA << "\nPlease enter your contact's ID: " << RESET;
	std::string userInput;
	getline(std::cin, userInput);
	std::istringstream convert(userInput);
	int id;
	if ( !(convert >> id))
	{
		std::cout << RED << "ID are digits" << RESET << std::endl;
		return;
	}
	else if (id < 0 || id > count)
	{
		std::cout << RED << "Out of range" << std::endl;
		return;
	} 
	Contacts[id].showIDInfo(id);
	return ;
	
}

//TODO: change count causing loss of all previous contacts
int Phonebook::executeInput(std::string input, int &count)
{
	if (input == "ADD")
	{
		if (count == 8)
			count = 0;
		this->Contacts[count].createContact();
		count++;
		return (0);
	}
	else if (input == "SEARCH")
	{
		this->searchContact(count);
		return (1);
	}
	else
		exit(1);
}

int main()
{
	Phonebook myFriends;
	std::string userInput;
	int	count = 0;
	while (1)
	{
		std::cout << LBLUE << "Please select one of the following options: ADD, SEARCH, EXIT" << RESET << std::endl;
		getline(std::cin, userInput);
		if (std::cin.eof())
		{
			std::cout << RED << "Bye bye, you quit the program" << RESET << std::endl;
			return (1);
		}
		else if (userInput != "ADD" && userInput != "SEARCH" && userInput != "EXIT")
		{
			std::cout << RED << "Accepted options are ADD, SEARCH, EXIT!" << RESET << std::endl;
			continue;
		}
		else
			myFriends.executeInput(userInput, count);
	}
	return 0;
}