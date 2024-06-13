/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:30:51 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/13 17:24:49 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain* dogBrain;
    public:
        virtual void        makeSound() const;
        virtual std::string getType() const;
        
        Dog();
        Dog(const Dog& copy);
        Dog& operator=(const Dog& copy);
        ~Dog();
};

#endif

