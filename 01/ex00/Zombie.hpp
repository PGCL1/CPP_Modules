/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:52:19 by glacroix          #+#    #+#             */
/*   Updated: 2024/03/08 16:49:55 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
	std::string name;

	public:
	void announce(void);
	Zombie(std::string name);

	Zombie();
	~Zombie();
};

Zombie *newZombie( std::string name );
void randomChump( std::string name );

#endif
