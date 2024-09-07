/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 20:19:20 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/09/07 20:33:00 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    this->type = "Dog";
    std::cout << "Dog created" << std::endl;
    this->b = new Brain();
}

Dog::~Dog() {
    std::cout << "Dog destroyed" << std::endl;
    delete this->b;
}

Dog::Dog(Dog & cpy): Animal(cpy)
{
	this->type = cpy.getType();
	std::cout << "A dog was constructed from copy\n" << std::endl;
}

Dog & Dog::operator=(Dog const & cpy)
{
	this->type = cpy.type;
	return (*this);
}


void Dog::makeSound() const {
    std::cout << "guauuu" << std::endl;
}