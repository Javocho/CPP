/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:34:59 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/09/01 18:55:23 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	name = "Zombie";
	std::cout << "Zombie created" << std::endl;
}

Zombie::Zombie(std::string name) {
	this->name = name;
	std::cout << "Zombie" << this->name << " created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << this->name << " destroyed" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}