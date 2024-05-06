/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:03:46 by glacroix          #+#    #+#             */
/*   Updated: 2024/05/03 19:04:06 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fractional(8)
{
    std::cout << "Default Constructor called" << std::endl;
    this->number = 0;
}

//copy
Fixed::Fixed(Fixed& _f) : fractional(8)
{
    std::cout << "Copy constructor called" << std::endl;
   this->number = _f.number;
}  

//assignement operator overload



Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}