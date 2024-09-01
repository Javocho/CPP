/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 20:16:57 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/09/01 20:19:30 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type(NULL) {
    std::cout << "Animal created with no type" << std::endl;
}

Animal::Animal(std::string t) {
    std::cout << "Animal created with type " << type << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destroyed" << std::endl;
}