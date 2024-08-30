/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 00:44:51 by javocho           #+#    #+#             */
/*   Updated: 2024/08/27 19:18:59 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :
	ClapTrap("", 100, 50, 20)
{
	std::cout << "ScavTrap constructor" << std::endl;
}
ScavTrap::ScavTrap(std::string name) :
	ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap name constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy) {
    if (this != &copy) {
        ClapTrap::operator=(copy); // Call the base class assignment operator
    }
    return *this;
}

void ScavTrap::attack(const std::string& target) {
    if (this->getHealth() == 0) std::cout << "PLS STOP SCAVTRAP IS DEAD!" << std::endl;
    else if (this->getEnergy() > 0) {
        std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getDamage() << " points of damage!" << std::endl;
        this->setEnergy(this->getEnergy() - 1);

    }
    else std::cout << this->getName() << " doesn't have more energy!" << std::endl;

}

void ScavTrap::guardGate() const {
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}