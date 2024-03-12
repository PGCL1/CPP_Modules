/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:52:19 by glacroix          #+#    #+#             */
/*   Updated: 2024/03/12 10:40:47 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <memory>

class Zombie {
	std::string name;

	public:
	void announce(void);
	void nameZombie(std::string name);

	Zombie();
	Zombie(std::string name);
	~Zombie();
};

Zombie* newZombie( std::string name );
Zombie* zombieHorde(int N, std::string name);

#endif
