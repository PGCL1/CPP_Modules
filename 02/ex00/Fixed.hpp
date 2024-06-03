/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:00:02 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/03 15:59:31 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	private:
		int number;
		static const int fractional = 8;

	public:
		void setRawBits(int const raw);
		int	getRawBits(void) const;
		Fixed();
		Fixed(const Fixed& _f);
		Fixed& operator=(const Fixed& copy);
		~Fixed();
};

#endif
