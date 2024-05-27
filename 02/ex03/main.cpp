/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:57:32 by glacroix          #+#    #+#             */
/*   Updated: 2024/05/26 20:41:03 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
	std::cout << std::boolalpha;
	Point a(1, 1);
	Point b(2, 3);
	Point c(2, 5);

	Point p(1, 2);

	
	std::cout << bsp(a, b, c, p) << std::endl;
	return 0;
}