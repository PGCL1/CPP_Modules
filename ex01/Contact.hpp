/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:25:15 by glacroix          #+#    #+#             */
/*   Updated: 2024/02/20 15:59:20 by glacroix         ###   ########.fr       */
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
		Contact();
};


#endif
