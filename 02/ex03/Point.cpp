/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:00:56 by glacroix          #+#    #+#             */
/*   Updated: 2024/05/29 17:11:59 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) 
{
}

Point::Point(float const _x, float const _y)
{
	Fixed& newX = const_cast <Fixed &> (this->x);
	Fixed& newY = const_cast <Fixed &> (this->y);

	newX = _x;
	newY = _y;
}

float Point::getX() const
{
	return x.toFloat();
}

float Point::getY() const
{
	return y.toFloat();
}

Point::Point(const Point& _Point)
{
	Fixed& newX = const_cast <Fixed &> (this->x);
	Fixed& newY = const_cast <Fixed &> (this->y);	
    newX = _Point.x;
	newY = _Point.y;
}

Point& Point::operator=(const Point& original) 
{
	Fixed& newX = const_cast <Fixed &> (this->x);
	Fixed& newY = const_cast <Fixed &> (this->y);
    if (this != &original)
	{
        newX = original.x;
		newY = original.y;
	}
    return *this;
}

Point::~Point() {}
