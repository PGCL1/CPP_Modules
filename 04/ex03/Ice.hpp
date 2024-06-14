/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:27:53 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/14 18:00:28 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria 
{
    public:

        AMateria* clone() const;
        Ice(std::string const& type);
        Ice();
        Ice(const Ice& copy);
        Ice& operator=(const Ice&copy);
        ~Ice();
};

#endif
