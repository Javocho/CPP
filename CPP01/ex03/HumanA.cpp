/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 01:26:27 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/09/01 19:03:08 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :  name(name), w(weapon) {
	std::cout << "HumanA " << name << " created with " << weapon.getType() << std::endl;
}

HumanA::~HumanA() {
	std::cout << "HumanA " << this->name << " destroyed" << std::endl;
}

void HumanA::attack() const {
	std::cout << name << " attacks with their " << w.getType() << std::endl;
}