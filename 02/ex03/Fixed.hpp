/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:00:02 by glacroix          #+#    #+#             */
/*   Updated: 2024/05/26 22:37:47 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int number;
		static const int fractional = 8;

	public:
		float toFloat( void ) const;
		int toInt( void ) const;

		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed& _f);

		Fixed& operator+(const Fixed& copy);
		Fixed& operator-(const Fixed& copy);
		Fixed& operator/(const Fixed& copy);
		Fixed& operator*(const Fixed& copy);

		bool operator>(const Fixed &copy);
		bool operator<(const Fixed &copy);
		bool operator>=(const Fixed &copy);
		bool operator<=(const Fixed &copy);
		bool operator==(const Fixed &copy);
		bool operator!=(const Fixed &copy);

		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);

		static Fixed& min(Fixed& first, Fixed &second);
		static Fixed& max(Fixed& first, Fixed &second);
		static Fixed min(const Fixed& first, const Fixed& second);
		static Fixed max(const Fixed& first, const Fixed& second);
		
		Fixed& operator=(const Fixed& copy);
		~Fixed();
};

std::ostream& operator<< (std::ostream &output, const Fixed& _f);

#endif
