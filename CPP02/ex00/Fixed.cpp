/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:19:04 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/08/19 01:03:22 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional = 8;

Fixed::Fixed() :value(0) {
	
}

Fixed::~Fixed() {

}

Fixed::Fixed(const Fixed &copy) {
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy) {
	this->value = copy.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const {
	return (this->value);
}

void	Fixed::setRawBits(const int raw) {
	this->value = raw;
}

/*Copy Constructor: Initializes a new object.
Copy Assignment Operator: Operates on an object that has already been initialized.*/