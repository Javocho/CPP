/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 20:19:20 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/09/07 12:12:33 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    this->type = "Dog";
    std::cout << "Dog created" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destroyed" << std::endl;
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