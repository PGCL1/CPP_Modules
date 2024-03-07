/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:09:08 by glacroix          #+#    #+#             */
/*   Updated: 2024/03/04 16:52:48 by glacroix         ###   ########.fr       */
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
