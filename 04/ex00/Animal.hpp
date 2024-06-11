/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:55:02 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/11 18:42:59 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
    protected:
        std::string type;

    public:
        void makeSound();

        Animal();
        Animal(const Animal& copy);
        Animal& operator=(const Animal& copy);
        ~Animal();
};

#endif
