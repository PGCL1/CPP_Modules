/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:57:32 by glacroix          #+#    #+#             */
/*   Updated: 2024/05/29 17:14:14 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
	std::cout << std::boolalpha;
	Point a(1, 1);
	Point b(2, 3);
	Point c(2, 5);
	
	Point p(1.5, 2);
	std::cout << "Point P is within the triangle ABC: " << bsp(a, b, c, p) << std::endl;
	
	Point p1(0, 0);
	std::cout << "Point P1 is within the triangle ABC: " << bsp(a, b, c, p1) << std::endl;
	return 0;
}
