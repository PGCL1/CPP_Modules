/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:37:48 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/12 12:25:13 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
       virtual void makeSound() const;
       virtual std::string getType() const;

        Cat();
        Cat(const Cat& copy);
        Cat& operator=(const Cat& copy);
        ~Cat();
};

#endif
