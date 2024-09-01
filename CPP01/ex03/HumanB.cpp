/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:33:22 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/09/01 19:04:25 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) :  name(name), w(NULL) {
	std::cout << "HumanB " << name << " created with no weapon" << std::endl;
}

HumanB::~HumanB() {
	std::cout << "HumanB " << this->name << " destroyed" << std::endl;
}

void HumanB::setWeapon(Weapon &w) {
	this->w = &w;
}

void HumanB::attack() const {
	if (w == NULL) std::cout << name << " attacks with their hands" << std::endl;
	else {
		std::cout << name << " attacks with their " << w->getType() << std::endl;
	}
}