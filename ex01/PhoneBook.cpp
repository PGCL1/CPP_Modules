/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:44:07 by glacroix          #+#    #+#             */
/*   Updated: 2024/02/27 17:21:36 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

void searchInstructions()
{
	std::cout << GREEN << std::right << std::setw(10) << "ID" << " | " <<
			std::internal << std::setw(10) << "FIRST NAME" << " | " <<
			std::right << std::setw(10) << "LAST NAME" << " | " << 
			std::right << std::setw(10) << "NICKNAME" << " | " << 
			std::right << RESET << std::endl;
}

//TODO: use *getter in search contact to do std::cout in one line
//TODO: add possibility to search users based on their ID (std::cin)
//TODO: correct CMD-D infinite loop
//TODO: refactor code
void Phonebook::searchContact(int &count)
{
	std::string userInput;
	if (count == 0)
	{
		std::cout << RED << "You don't have any contacts!" << RESET << std::endl;
		return ;
	}
	searchInstructions();
	for (int i = 0; i < count; i++)
	{
		//std::string test =  this->Contacts[i].getter[i]();
		if (Contacts[i].getFirstName().size() >= 10)
		{
			std::string s = Contacts[i].getFirstName();
			s.resize(9);
			s += ".";
			std::cout << "S: " << s << std::endl;
		}
		else
		{	
			std::cout << std::right << std::setw(10) << i << " | " <<
			std::right << std::setw(10) << this->Contacts[i].getFirstName() << " | " <<
			std::right << std::setw(10) << this->Contacts[i].getLastName() << " | " << 
			std::right << std::setw(10) << this->Contacts[i].getNickname() << " | " << 
			std::right << std::endl;
		}
	}
	std::cout << ORANGE << "Please enter your contact's ID: " << RESET;
	getline(std::cin, userInput);
	if (isnumber(userInput) == 0)
		std::cout << "Not a number!" << std::endl;
	//else if (userInput.c_str() > count || userInput.c_str() < 0)
		//std::cout << "ca a lair de marche" << std::endl;
	return ;
		
}

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
		if (userInput != "ADD" && userInput != "SEARCH" && userInput != "EXIT")
		{
			std::cout << RED << "Accepted options are ADD, SEARCH, EXIT!" << RESET << std::endl;
			continue;
		}
		else
			myFriends.executeInput(userInput, count);
	}
	return 0;
}
