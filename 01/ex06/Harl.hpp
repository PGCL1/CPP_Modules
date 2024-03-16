/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 16:43:05 by glacroix          #+#    #+#             */
/*   Updated: 2024/03/15 17:40:16 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>
#include "Colors.hpp"

class Harl
{
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

	public:
		void complain(std::string level);
		Harl();
		~Harl();
};

#endif
