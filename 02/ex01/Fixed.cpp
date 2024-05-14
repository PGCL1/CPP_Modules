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

Fixed::Fixed() 
{
    std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const int num) 
{
    std::cout << "Int Constructor called" << std::endl;
    this->number = roundf(float(num) * float(1 << 8));
}


Fixed::Fixed(const float num)
{
    std::cout << "Float Constructor called" << std::endl;
    this->number = roundf(float(num) * float(1 << 8));
}

//copy
Fixed::Fixed(const Fixed& _f)
{
    std::cout << "Copy constructor called" << std::endl;
    this->number = _f.number;
}  

//assignement operator overload
Fixed& Fixed::operator=(const Fixed &copy)
{
    std::cout << "Copy Assignement operator called" << std::endl;
    if (this != &copy)
        this->number = copy.number;
    return *this;
}

std::ostream& operator<< (std::ostream &output, const Fixed& _f)
{
    output << _f.toFloat();
    return output;
}

float Fixed::toFloat(void) const
{
    return (float(this->number) / float(1 << 8));
}

int Fixed::toInt(void) const
{
    return (int(this->number) / int(1 << 8));
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->number = raw;

}

int Fixed::getRawBits(void) const 
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->number);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}