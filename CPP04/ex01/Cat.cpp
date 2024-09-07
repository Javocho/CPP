/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 20:20:28 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/09/07 20:32:56 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    this->type = "Cat";
    std::cout << "Cat created" << std::endl;
    this->b = new Brain();
}

Cat::~Cat() {
    std::cout << "Cat destroyed" << std::endl;
    delete this->b;
}

Cat::Cat(Cat & cpy): Animal(cpy)
{
	this->type = cpy.getType();
	std::cout << "A cat was constructed from copy\n" << std::endl;
}

Cat & Cat::operator=(Cat const & cpy)
{
	this->type = cpy.type;
	return (*this);
}

void Cat::makeSound() const {
    std::cout << "miaaaauuu" << std::endl;
}
