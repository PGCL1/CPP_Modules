/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:00:56 by glacroix          #+#    #+#             */
/*   Updated: 2024/05/17 12:37:45 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
	this->x = 0;
	this->y = 0;
}

Point::Point(float const x, float const y)
{
	this->x = x;
	this->y = y;
}

Point& Point::operator=(Point& const original)
{
    if (this != &original)
	{
        this->x = original.x;
		this->y = original.y;
	}
    return *this;
}
