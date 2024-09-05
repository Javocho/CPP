/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 00:44:51 by javocho           #+#    #+#             */
/*   Updated: 2024/09/05 20:57:17 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :
	ClapTrap("", 100, 50, 20)
{
	std::cout << "ScavTrap constructor without name" << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap name constructor with name " << this->name <<  std::endl;
}

ScavTrap::~ScavTrap()
{
    if (this->name != "") std::cout  << "ScavTrap destructor with name " << this->name << std::endl;
    else std::cout  << "ScavTrap destructor without name" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy) {
    if (this != &copy) {
        ClapTrap::operator=(copy); // Call the base class assignment operator
    }
    return *this;
}

void ScavTrap::attack(const std::string& target) {
    if (this->health == 0) std::cout << "PLS STOP SCAVTRAP IS DEAD!" << std::endl;
    else if (this->energy > 0) {
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->damage << " points of damage!" << std::endl;
        this->energy = this->energy - 1;

    }
    else std::cout << this->name << " doesn't have more energy!" << std::endl;

}

void ScavTrap::guardGate() const {
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}