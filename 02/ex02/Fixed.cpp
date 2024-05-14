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
    std::cout << "number = " << this->number << " copy = " << copy.number << std::endl;
    this->number += copy.number;
    return *this;
}

Fixed& Fixed::operator-(const Fixed& copy)
{
    std::cout << "number = " << this->number << " copy = " << copy.number << std::endl;
    this->number -= copy.number;
    return *this;
}

Fixed& Fixed::operator*(const Fixed& copy)
{
    //this->number *= copy.number;
    std::cout << "number = " << this->number << " copy = " << copy.number << std::endl;
    this->number = this->number * copy.number;
    this->number = this->toFloat();
    return *this;
}

//celui la fonctionne pas
Fixed& Fixed::operator/(const Fixed& copy)
{
    this->number /= copy.number;
    std::cout << "number = " << this->number << " copy = " << copy.toFloat() << std::endl;
    return *this;
}

/*
Fixed& Fixed::operator=(const Fixed &copy)
{
    if (this != &copy)
        this->number = copy.number;
    return *this;
}
*/
std::ostream& operator<< (std::ostream &output, const Fixed& _f)
{
    output << _f.toFloat();
    return output;
}


Fixed::~Fixed() {}