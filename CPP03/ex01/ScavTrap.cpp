/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 00:44:51 by javocho           #+#    #+#             */
/*   Updated: 2024/08/27 00:22:17 by javocho          ###   ########.fr       */
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
	std::cout << "ScavTrap param constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& cl)
{
	std::cout << "ScavTrap operator =" << std::endl;
	*this = cl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy) {
	this->name = copy.name;
    this->health = copy.health;
    this->energy = copy.energy;
    this->damage = copy.damage;
	return (*this);
}