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

class Fixed {
	int number;
	const int fractional;

		public:
	void setRawBits(int const raw);
	int	getRawBits(void);

	Fixed();
	Fixed(Fixed& _f);
//	Fixed& operator=(const Fixed& copy);
	~Fixed();
};

#endif
