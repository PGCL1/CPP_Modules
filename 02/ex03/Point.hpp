/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:01:13 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/03 15:47:32 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
	private:
		Fixed const x;
		Fixed const y;
		
	public:
		float getX(void) const;	
		float getY(void) const;	
		int getXFixed(void) const;	
		int getYFixed(void) const;	

        Point();
        Point(float const _x, float const _y);
		Point(const Point& _Point);
		Point&  operator=(const Point& original);
		~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const p);

#endif
