/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:23:50 by javocho           #+#    #+#             */
/*   Updated: 2024/09/07 12:28:44 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "wrong cat";
	std::cout << "Wrong cat constructed\n";
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong cat destroyed\n";
}

WrongCat::WrongCat(WrongCat & cpy): WrongAnimal(cpy)
{
	this->type = cpy.getType();
	std::cout << "Cat constructed from copy\n";
}

WrongCat & WrongCat::operator=(WrongCat const & cpy)
{
	this->type = cpy.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Fake meow\n";
}