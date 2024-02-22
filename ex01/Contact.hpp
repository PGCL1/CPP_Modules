/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:25:15 by glacroix          #+#    #+#             */
/*   Updated: 2024/02/22 16:17:38 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include "Colors.hpp"

class Contact {
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string DarkestSecret;
	public:
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
		void (Contact::*setter[5])();
		std::string (Contact::*getter[5])();
		Contact();
};

typedef void (Contact::*fp_s)(void);
typedef std::string (Contact::*fp_g)(void);
	
fp_s setter[5] = {
	&Contact::setFirstName, 
	&Contact::setLastName, 
	&Contact::setNickname,
	&Contact::setPhoneNumber,
	&Contact::setDarkestSecret
};

fp_g getter[5] = { 
	&Contact::getFirstName, 
	&Contact::getLastName, 
	&Contact::getNickname,
	&Contact::getPhoneNumber,
	&Contact::getDarkestSecret
};
#endif
