/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:22:14 by javocho           #+#    #+#             */
/*   Updated: 2024/09/07 12:28:36 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Wrong Animal constructed with no type\n";
	this->type = "";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal destroyed\n";
}

WrongAnimal::WrongAnimal(WrongAnimal & cpy)
{
	this->type = cpy.type;
	std::cout << "Wrong Animal constructed from a copy\n";
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & cpy)
{
	this->type = cpy.type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "generic wrong animal sound\n";
}

std::string WrongAnimal::getType( void ) const
{
	return (this->type);
}