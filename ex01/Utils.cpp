/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:09:08 by glacroix          #+#    #+#             */
/*   Updated: 2024/03/04 16:10:20 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

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

void searchInstructions()
{
	std::cout << GREEN << std::right << std::setw(10) << "ID" << " | " <<
			std::internal << std::setw(10) << "FIRST NAME" << " | " <<
			std::right << std::setw(10) << "LAST NAME" << " | " << 
			std::right << std::setw(10) << "NICKNAME" << " | " << 
			std::right << RESET << std::endl;
}