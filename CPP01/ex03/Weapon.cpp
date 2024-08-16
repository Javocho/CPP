/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:34:08 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/08/16 18:50:01 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon) {
	this->setType(weapon);
}

Weapon::~Weapon() {
	
}

std::string const Weapon::getType() const {
	return (type);
}

void Weapon::setType(const std::string &weapon) {
	this->type = weapon;
}