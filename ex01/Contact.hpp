/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:25:15 by glacroix          #+#    #+#             */
/*   Updated: 2024/03/04 15:52:19 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include "Colors.hpp"
#include <iomanip>
#include <sstream>

class Contact {
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string DarkestSecret;
	
	public:
		typedef void (Contact::* fp_s)(void);
		typedef std::string (Contact::* fp_g)(void);

		fp_s setter[5];
		fp_g getter[5];

		void setFirstName();
		void setLastName();
		void setNickname();
		void setPhoneNumber();
		void setDarkestSecret();
		
		std::string getFirstName();
		std::string getLastName();
		std::string getNickname();
		std::string getPhoneNumber();
		std::string getDarkestSecret();
		
		void createContact();
		void showContactInfo();
		void showIDInfo(int &id);
		Contact();	
};

int isnumber(std::string string);

#endif
