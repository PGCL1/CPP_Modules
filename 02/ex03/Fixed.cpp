/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:03:46 by glacroix          #+#    #+#             */
/*   Updated: 2024/05/26 22:37:34 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() 
{
    this->number = 0;
}

Fixed::Fixed(const int num) 
{
    this->number = roundf(float(num) * float(1 << 8));
}


Fixed::Fixed(const float num)
{
    this->number = roundf(float(num) * float(1 << 8));
}

float Fixed::toFloat(void) const
{
    return (float(this->number) / float(1 << 8));
}

int Fixed::toInt(void) const
{
    return (int(this->number) / int(1 << 8));
}

Fixed::Fixed(const Fixed& _f)
{
    this->number = _f.number;
}  


Fixed Fixed::operator++()
{
    ++number;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    ++number;
    return temp;
}

Fixed Fixed::operator--()
{
    --number;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    --number;
    return temp;
}

bool Fixed::operator<(const Fixed& copy)
{
    return (this->number < copy.number);
}

bool Fixed::operator>(const Fixed& copy)
{
    return (this->number > copy.number);
}

bool Fixed::operator>=(const Fixed& copy)
{
    return (this->number >= copy.number);
}

bool Fixed::operator<=(const Fixed& copy)
{
    return (this->number <= copy.number);
}

bool Fixed::operator==(const Fixed& copy)
{
    return (this->number == copy.number);
}

bool Fixed::operator!=(const Fixed& copy)
{
    return (this->number != copy.number);
}

Fixed& Fixed::operator+(const Fixed& copy)
{
    this->number += copy.number;
    return *this;
}

Fixed& Fixed::operator-(const Fixed& copy)
{
    this->number -= copy.number;
    return *this;
}

Fixed& Fixed::operator*(const Fixed& copy)
{
    this->number = this->number * copy.number;
    this->number = this->toFloat();
    return *this;
}

Fixed& Fixed::operator/(const Fixed& copy)
{
    this->number /= copy.number;
    this->number *= (1 << 8);
    return *this;
}

Fixed& Fixed::max(Fixed& first, Fixed& second)
{
    return (first.number > second.number ? first : second);
}

Fixed Fixed::max(const Fixed& first, const Fixed& second)
{
    return (first.number > second.number ? first : second);
}

Fixed& Fixed::min(Fixed& first, Fixed& second)
{
    return (first.number < second.number ? first : second);
}
//ternaries
Fixed Fixed::min(const Fixed& first, const Fixed& second)
{
    return (first.number < second.number ? first : second);
}

Fixed& Fixed::operator=(const Fixed &copy)
{
    if (this != &copy)
        this->number = copy.number;
    return *this;
}

std::ostream& operator<< (std::ostream &output, const Fixed& _f)
{
    output << _f.toFloat();
    return output;
}


Fixed::~Fixed() {}
