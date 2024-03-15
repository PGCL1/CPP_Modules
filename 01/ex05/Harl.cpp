/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 16:46:52 by glacroix          #+#    #+#             */
/*   Updated: 2024/03/15 17:42:58 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger " 
        << "I really do!" << std::endl;
}
void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. " 
        << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" 
        << std::endl;
}
void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. " 
        << "I’ve been coming for years whereas you started working here since last month." 
        << std::endl;
}
void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


void Harl::complain(std::string level)
{
    int i = 0;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (; i < 4; i++)
    {
        if (level == levels[i])
            break;
    }
    switch(i)
    {
        case 0:
            this->debug();
            break;
        case 1:
            this->info();
            break;
        case 2:
            this->warning();
            break;
        case 3:
            this->error();
            break;
        case 4:
            std::cout << RED << "ERROR: This is not an accepted option" << RESET << std::endl;
            break;
    }
}

Harl::~Harl() {}
