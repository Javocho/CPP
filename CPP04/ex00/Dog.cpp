/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 20:19:20 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/09/01 20:20:24 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): type(): type("Dog") {
    std::cout << "Dog created" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destroyed" << std::endl;
}