/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 20:20:28 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/09/07 12:13:21 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    this->type = "Cat";
    std::cout << "Cat created" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destroyed" << std::endl;
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
