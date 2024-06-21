/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:55:02 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/14 14:45:24 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>

class AAnimal 
{
    protected:
        std::string type;

    public:
       virtual void makeSound() const = 0;
       virtual  std::string getType() const;

        AAnimal();
        AAnimal(const AAnimal& copy);
        AAnimal& operator=(const AAnimal& copy);
        virtual ~AAnimal();
};

#endif
