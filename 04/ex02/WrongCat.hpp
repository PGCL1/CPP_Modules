/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:55:36 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/13 11:58:52 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
       void makeSound() const;
       std::string getType() const;

        WrongCat();
        WrongCat(const WrongCat& copy);
        WrongCat& operator=(const WrongCat& copy);
        ~WrongCat();
};

#endif

