/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:51:57 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/14 17:54:32 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(std::string const& type)
{
    this->type = type;
}

AMateria::~AMateria()
{
    std::cout << "AMateria Destructor" << std::endl;
}
