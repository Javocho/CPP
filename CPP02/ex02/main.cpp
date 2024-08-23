/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 20:09:21 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/08/23 20:09:22 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << "\t\tis a at start\n" << std::endl;
	std::cout << ++a << "\tis a at ++a\n" << std::endl;
	std::cout << a << "\tis a after ++a\n" << std::endl;
	std::cout << a++ <<"\tis a at a++\n" << std::endl;
	std::cout << a << "\tis a after a++\n" << std::endl;

	std::cout << b << "\t\tvalue of b\n" << std::endl;

	std::cout << Fixed::max(a, b) << "\t\tthe max of a and b\n" << std::endl;
	std::cout << Fixed::min(a, b) << "\tthe min of a and b\n" << std::endl;

	return 0;
}