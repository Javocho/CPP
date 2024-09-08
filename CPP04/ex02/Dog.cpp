/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 20:19:20 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/09/08 17:17:29 by fcosta-f         ###   ########.fr       */
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
    this->b = new Brain(*cpy.b);
	std::cout << "A dog was constructed from copy\n" << std::endl;
}

Dog & Dog::operator=(Dog const & cpy)
{
    std::cout << "Dog Assignation operator called" << std::endl;
    if (this == &cpy) return *this;
	this->type = cpy.type;
    this->b = new Brain();
    *this->b = *cpy.b;
	return (*this);
}


void Dog::makeSound() const {
    std::cout << "guauuu" << std::endl;
}