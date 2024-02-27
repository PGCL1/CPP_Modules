/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:23:47 by glacroix          #+#    #+#             */
/*   Updated: 2024/02/27 16:01:50 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(){
	std::cout << ORANGE << "Please enter your contact's first name: " << RESET;
	getline(std::cin, this->FirstName);
}

void Contact::setLastName(){
	std::cout << ORANGE << "Please enter your contact's last name: " << RESET;
	getline(std::cin, this->LastName);
}

void Contact::setNickname(){
	std::cout << ORANGE << "Please enter your contact's nickname: " << RESET;
	getline(std::cin, this->Nickname);
}
void Contact::setPhoneNumber(){
	std::cout << ORANGE << "Please enter your contact's phone number: " << RESET;
	getline(std::cin, this->PhoneNumber);
}
void Contact::setDarkestSecret(){
	std::cout << ORANGE << "Please enter your contact's darkest secret: " << RESET;
	getline(std::cin, this->DarkestSecret);
}

std::string Contact::getFirstName()		{ return this->FirstName; }
std::string Contact::getLastName()		{ return this->LastName; }
std::string Contact::getNickname()		{ return this->Nickname; }
std::string Contact::getPhoneNumber()	{ return this->PhoneNumber; }
std::string Contact::getDarkestSecret() { return this->DarkestSecret; }

int isnumber(std::string string)
{
	size_t i = 0;
	for (; i < string.size(); i++)
	{
		if (isdigit(string[i]) == 0)
			return 0;
	}
	return 1;
}


Contact::Contact(void)
{
	setter[0] = &Contact::setFirstName;
	setter[1] = &Contact::setLastName;
	setter[2] = &Contact::setNickname;
	setter[3] = &Contact::setPhoneNumber;
	setter[4] = &Contact::setDarkestSecret;

	getter[0] = &Contact::getFirstName;
	getter[1] = &Contact::getLastName;
	getter[2] = &Contact::getNickname;
	getter[3] = &Contact::getPhoneNumber;
	getter[4] = &Contact::getDarkestSecret;
}

void Contact::createContact()
{
	for (int i = 0; i < 5; i++)
	{
		while (1)
		{
			(this->*setter[i])();
			if ((this->*getter[i])().empty() == 1)
			{
				//TODO: check for CTRL-D
				std::cout << RED << "This field cannot be empty!" << RESET << std::endl;
				//(this->*getter[i])().clear();
				continue;
			}
			if (i == 3)
			{
				if (isnumber((this->*getter[i])()) == 0 || (this->*getter[i])().size() != 9)
				{
					std::cout << RED << "Phone Numbers are consisted of 9 digits!" << RESET << std::endl;
					(this->*getter[i])().clear();
					continue;
				}
			}
			break;
		}
	}
	std::cout << LGREEN << "All fields are valid. Contact added!" << RESET << std::endl;
}

