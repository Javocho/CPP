/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 19:53:18 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/08/23 20:17:40 by fcosta-f         ###   ########.fr       */
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

bool operator<(const Fixed &a, const Fixed &b) {
    return (a.toFloat() < b.toFloat());
}

bool operator>(const Fixed &a, const Fixed &b) {
    return (a.toFloat() > b.toFloat());
}

bool operator>=(const Fixed &a, const Fixed &b) {
    return (a.toFloat() >= b.toFloat());
}

bool operator<=(const Fixed &a, const Fixed &b) {
    return (a.toFloat() <= b.toFloat());
}

bool operator==(const Fixed &a, const Fixed &b) {
    return (a.toFloat() == b.toFloat());
}

bool operator!=(const Fixed &a, const Fixed &b) {
    return (a.toFloat() != b.toFloat());
}

float	Fixed::operator+(Fixed fixed) const
{
	return (this->toFloat() + fixed.toFloat());
}

float	Fixed::operator-(Fixed fixed) const
{
	return (this->toFloat() - fixed.toFloat());
}

float	Fixed::operator*(Fixed fixed) const
{
	return (this->toFloat() * fixed.toFloat());
}

float	Fixed::operator/(Fixed fixed) const
{
	return (this->toFloat() / fixed.toFloat());
}

Fixed	Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed	Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	// i = this->_fp_value;
	++this->value;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	// i = this->_fp_value;
	--this->value;
	return (tmp);
}

Fixed	&Fixed::min(Fixed &first, Fixed &second)
{
	if (first.toFloat() <= second.toFloat())
		return (first);
	else
		return (second);
}

const Fixed	&Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first.toFloat() <= second.toFloat())
		return (first);
	else
		return (second);
}

Fixed	&Fixed::max(Fixed &first, Fixed &second)
{
	if (first.toFloat() >= second.toFloat())
		return (first);
	else
		return (second);
}

const Fixed	&Fixed::max(const Fixed &first, const Fixed &second)
{
	if (first.toFloat() >= second.toFloat())
		return (first);
	else
		return (second);
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