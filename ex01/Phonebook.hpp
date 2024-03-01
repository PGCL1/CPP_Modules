/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:32:43 by glacroix          #+#    #+#             */
/*   Updated: 2024/03/01 18:36:15 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>

class Phonebook {
	Contact	Contacts[8];
	public:
		void	searchContact(int &count);
		void	exitPhoneBook();
		int		executeInput(std::string input, int &count);
};

#endif
