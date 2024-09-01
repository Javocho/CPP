/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 20:20:28 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/09/01 20:20:47 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): type(): type("Cat") {
    std::cout << "Cat created" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destroyed" << std::endl;
}