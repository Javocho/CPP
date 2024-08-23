/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 19:53:18 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/08/23 19:54:45 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional = 8;

Fixed::Fixed() :value(0) {
	
}

Fixed::Fixed(const int n): value(n << fractional) {
	
}

Fixed::Fixed(const float value): value(roundf(value * (1 << this->fractional))) {

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