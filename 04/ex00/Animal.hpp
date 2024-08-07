/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:55:02 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/13 12:23:40 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
    protected:
        std::string type;

    public:
       virtual void makeSound() const;
       virtual  std::string getType() const;

        Animal();
        Animal(const Animal& copy);
        Animal& operator=(const Animal& copy);
        virtual ~Animal();
};

#endif
