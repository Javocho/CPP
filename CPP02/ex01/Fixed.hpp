/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 01:07:10 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/08/23 19:46:09 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <math.h>

class Fixed {
	private:
		int value;
		static const int fractional;

	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float f);
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &copy);
		
		int getRawBits(void) const ;
		void setRawBits(const int raw);

		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream &operator<<(std::ostream &str, Fixed const &fixed_n);

#endif