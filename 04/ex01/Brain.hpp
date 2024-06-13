/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:47:23 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/13 15:31:45 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain 
{
    protected:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain& copy);
        Brain& operator=(const Brain& copy);
        ~Brain();
};

#endif
