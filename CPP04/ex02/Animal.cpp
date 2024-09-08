/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 20:16:57 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/09/07 20:55:32 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("") {
    std::cout << "Animal created with no type" << std::endl;
}

Animal::Animal(std::string t): type(t) {
    std::cout << "Animal created with type " << type << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destroyed" << std::endl;
}

Animal::Animal(Animal & cpy)
{
	this->type = cpy.type;
	std::cout << "Animal was constructed from a copy\n" << std::endl;
}

Animal & Animal::operator=(Animal const & cpy)
{
	this->type = cpy.type;
	return (*this);
}

std::string Animal::getType() const {
    return this->type;
}