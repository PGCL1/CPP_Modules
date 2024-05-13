/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:00:02 by glacroix          #+#    #+#             */
/*   Updated: 2024/05/03 19:02:55 by glacroix         ###   ########.fr       */
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
		void setRawBits(int const raw);
		int	getRawBits(void) const;
		float toFloat( void ) const;
		int toInt( void ) const;

		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed& _f);
		Fixed& operator=(const Fixed& copy);
		//Fixed& operator<<(std::ostream &output, Fixed& _f);
		~Fixed();
};

#endif
