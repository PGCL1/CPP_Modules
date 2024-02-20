/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:23:47 by glacroix          #+#    #+#             */
/*   Updated: 2024/02/20 18:15:13 by glacroix         ###   ########.fr       */
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
	return this->FirstName;
}

std::string Contact::getLastName()
{
	return this->LastName;
}
std::string Contact::getNickname()
{
	return this->Nickname;
}
std::string Contact::getPhoneNumber()
{
	return this->PhoneNumber;
}
std::string Contact::getDarkestSecret()
{
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

//typedef void (Contact::*setVar)();

//setVar member_functions[5] = 
//{
	//&Contact::setFirstName,
	//&Contact::setLastName,
	//&Contact::setNickname,
	//&Contact::setPhoneNumber,
	//&Contact::setDarkestSecret
//};

	//for (int i = 0; i < 5; i++)
	//{
			//setVar(*member_functions[i])();
	//}

///*
Contact::Contact(void)
{
	std::cout << "Constructor has been called." << std::endl;
	while (1)
	{
		Contact::setFirstName();
		if (Contact::getFirstName().empty() == 1)
		{
			std::cout << RED << "This field cannot be empty!" << RESET << std::endl;
			continue;	
		}	
		break;
	}
	while (1)
	{
		Contact::setLastName();
		if (Contact::getLastName().empty() == 1)
		{
			std::cout << RED << "This field cannot be empty!" << RESET << std::endl;
			continue;	
		}	
		break;
	}
	while (1)
	{
		Contact::setNickname();
		if (Contact::getNickname().empty() == 1)
		{
			std::cout << RED << "This field cannot be empty!" << RESET << std::endl;
			continue;	
		}	
		break;
	}
	while (1)
	{
		Contact::setPhoneNumber();
		if (Contact::getPhoneNumber().empty() == 1)
		{
			std::cout << RED << "This field cannot be empty!" << RESET << std::endl;
			continue;	
		}
		if (isnumber(Contact::getPhoneNumber()) == 0 || Contact::getPhoneNumber().size() != 9)
		{
			std::cout << RED << "Phone numbers are consisted of 9 digits!" << RESET << std::endl;
			continue;
		}
		break;
	}
	while (1)
	{
		Contact::setDarkestSecret();
		if (Contact::getDarkestSecret().empty() == 1)
		{
			std::cout << RED << "This field cannot be empty!" << RESET << std::endl;
			continue;	
		}	
		break;
	}
	std::cout << GREEN << "All fields are valid. Contact added!" << RESET << std::endl;
};

int main()
{
	class Contact G;
	return 0;
}
