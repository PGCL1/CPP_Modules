/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:01:13 by glacroix          #+#    #+#             */
/*   Updated: 2024/05/26 23:04:23 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
	//problem comes from not being able to modify Fixed const in constructors
	private:
		Fixed const x;
		Fixed const y;
		//Fixed x;
		//Fixed y;
		
	public:
		Point();
		Point(float const _x, float const _y);
		float getX(void) const;	
		float getY(void) const;	
		//copy constructor
		Point&  operator=(const Point& original);
		~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const p);

#endif
