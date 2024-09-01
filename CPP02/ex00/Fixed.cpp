/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:19:04 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/09/01 19:57:43 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional = 8;

Fixed::Fixed() :value(0) {
	std::cout << "Fixed object created with default constructor" << std::endl; 
}

Fixed::~Fixed() {
	std::cout << "Fixed object destroyed" << std::endl; 
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Fixed object copied" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy) {
	std::cout << "Assignment operator called" << std::endl;
	this->value = copy.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(const int raw) {
	this->value = raw;
}

/*Copy Constructor: Initializes a new object.
Copy Assignment Operator: Operates on an object that has already been initialized.*/