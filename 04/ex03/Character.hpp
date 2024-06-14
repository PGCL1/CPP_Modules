/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 15:00:47 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/14 15:04:25 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>

class Character 
{
    private:
        std::string name;
        Materia elements[4];
    public:
        Character();
        Character(const std::string name);
        Character(const Character& copy);
        Character& operator=(const Character copy);
        ~Character();
};

#endif
