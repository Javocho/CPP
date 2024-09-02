/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 01:07:38 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/09/02 16:41:32 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional = 8;

Fixed::Fixed() :value(0) {
	std::cout << "Fixed object created with default constructor" << std::endl; 
}

Fixed::Fixed(const int n): value(n << fractional) {
	std::cout << "Fixed object created with int constructor" << std::endl; 
} //parte fraccional a cero

Fixed::Fixed(const float value): value(roundf(value * (1 << this->fractional))) {
	std::cout << "Fixed object created with float constructor" << std::endl; 
} //31.5 * 64 = 2016
//2016 / 64 = 31.5

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
	return (this->value);
}

void	Fixed::setRawBits(const int raw) {
	this->value = raw;
}

float	Fixed::toFloat(void)const
{
	return ((float)this->value / (float)(1 << this->fractional));
}

int	Fixed::toInt(void)const
{
	return (this->value >> this->fractional);
}

std::ostream &operator<<(std::ostream &os, Fixed const &fixed) {
	os << fixed.toFloat();
	return (os);
}