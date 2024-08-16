/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 01:26:27 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/08/16 18:35:51 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :  name(name), w(weapon) {
	
}

HumanA::~HumanA() {
	
}

void HumanA::attack() const {
	std::cout << name << " attacks with their " << w.getType() << std::endl;
}