/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:00:56 by glacroix          #+#    #+#             */
/*   Updated: 2024/05/26 23:08:54 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) 
{
}

Point::Point(float const _x, float const _y) : x(_x.toFloat()), y(_y.toFloat())
{
}

float Point::getX() const
{
	return x.toFloat();
}

float Point::getY() const
{
	return y.toFloat();
}

Point& Point::operator=(const Point& original) 
{
	Point test(original.x, original.y);
    if (this != &original)
	{
        this->x = original.x;
		this->y = original.y;
	}
    return *this;
}

Point::~Point() {}
