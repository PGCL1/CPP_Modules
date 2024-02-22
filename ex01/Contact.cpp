/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:23:47 by glacroix          #+#    #+#             */
/*   Updated: 2024/02/22 16:17:35 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(){
	std::cout << "Please enter your contact's first name: ";
	getline(std::cin, this->FirstName);
}

void Contact::setLastName(){
	std::cout << "Please enter your contact's last name: ";
	getline(std::cin, this->LastName);
}

void Contact::setNickname(){
	std::cout << "Please enter your contact's nickname: ";
	getline(std::cin, this->Nickname);
}
void Contact::setPhoneNumber(){
	std::cout << "Please enter your contact's phone number: ";
	getline(std::cin, this->PhoneNumber);
}
void Contact::setDarkestSecret(){
	std::cout << "Please enter your contact's darkest secret: ";
	getline(std::cin, this->DarkestSecret);
}

std::string Contact::getFirstName()
{
	std::cout << this->FirstName << '\n';
	return this->FirstName;
}

std::string Contact::getLastName()
{
	std::cout << this->LastName << '\n';
	return this->LastName;
}
std::string Contact::getNickname()
{
	std::cout << this->Nickname << '\n';
	return this->Nickname;
}
std::string Contact::getPhoneNumber()
{
	std::cout << this->PhoneNumber << '\n';
	return this->PhoneNumber;
}
std::string Contact::getDarkestSecret()
{
	std::cout << this->DarkestSecret << '\n';
	return this->DarkestSecret;
}

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
	std::cout << "Constructor has been called." << std::endl;
}

int main()
{
	class Contact G;
	for (int i = 0; i < 5; i++)
	{
		while (1)
		{
			(G.*setter[i])();
			if ((G.*getter[i])().empty() == 1)
			{
				std::cout << RED << "This field cannot be empty!" << RESET << std::endl;
				(G.*getter[i])().clear();
				continue;
			}
			if (i == 3)
			{
				if (isnumber((G.*getter[i])()) == 0 || (G.*getter[i])().size() != 9)
				{
					std::cout << RED << "Phone Numbers are consisted of 9 digits!" << RESET << std::endl;
					(G.*getter[i])().clear();
					continue;
				}
			}
			break;
		}
	}
	std::cout << GREEN << "All fields are valid. Contact added!" << RESET << std::endl;
	return 0;
}
