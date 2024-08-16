/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:33:22 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/08/16 18:51:16 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) :  name(name), w(NULL) {
	
}

HumanB::~HumanB() {
	
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