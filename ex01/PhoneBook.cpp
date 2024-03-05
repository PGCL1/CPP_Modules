/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:44:07 by glacroix          #+#    #+#             */
/*   Updated: 2024/03/05 14:36:57 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

static void searchInstructions()
{
	std::cout << LGREEN << std::right << std::setw(10) << "ID" << " | " <<
		std::internal << std::setw(10) << "FIRST NAME" << " | " <<
		std::right << std::setw(10) << "LAST NAME" << " | " << 
		std::right << std::setw(10) << "NICKNAME" << " | " << 
		std::right << RESET << std::endl;
}

static int idInput(int &count)
{
	int id;
	while (1)
	{
		std::cout << LBLUE << "\nPlease enter your contact's ID: " << RESET;
		std::string userInput;
		getline(std::cin, userInput);
		if (std::cin.eof())
		{
			std::cout << RED << "Bye bye, you quit the program" << RESET << std::endl;
			exit (1);
		}
		std::istringstream convert(userInput);
		if (!(convert >> id))
		{
			std::cout << RED << "ID are digits" << RESET;
			continue;
		}
		else if (id <= 0 || id > count || id > 8)
		{
			std::cout << RED << "Out of range" << RESET;
			continue;
		} 
		else
			break;		
	}
	return (id - 1);
}

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
		if (i == 8)
			break;
		std::cout << std::right << std::setw(10) << i + 1 << " | ";
		Contacts[i].showContactInfo();
	}
	int id = idInput(count);
	Contacts[id].showIDInfo(id);
	return ;
	
}

int Phonebook::executeInput(std::string input, int &count)
{
	if (input == "ADD")
	{
		this->Contacts[count % 8].createContact();
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
		std::cout << LBLUE << "Please select one of the following options (ADD, SEARCH, EXIT): " << RESET;
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