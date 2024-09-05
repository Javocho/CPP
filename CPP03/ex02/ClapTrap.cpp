/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 17:03:45 by javocho           #+#    #+#             */
/*   Updated: 2024/09/05 20:50:48 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name(""), health(10), energy(10), damage(0) {
    std::cout << "ClapTrap created!" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), health(10), energy(10), damage(0) {
    std::cout << "ClapTrap with name " <<  this->name << " created!" << std::endl ;
}

ClapTrap::ClapTrap(std::string name, unsigned int health, unsigned int energy, unsigned int damage): name(name), health(health), energy(energy), damage(damage) {
    std::cout << "ClapTrap with name " <<  this->name << " created!" << std::endl ;
}

ClapTrap::~ClapTrap() {
    if (this->name != "") std::cout  << "ClapTrap destructor with name " << this->name << std::endl;
    else std::cout  << "ClapTrap destructor without name" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy) {
	this->name = copy.name;
    this->health = copy.health;
    this->energy = copy.energy;
    this->damage = copy.damage;
	return (*this);
}

void		ClapTrap::display(std::ostream& stream) const
{
	stream << "ClapTrap " << name << " has " << health << " hit points, " << energy << " energy points and " << damage << " attack dammage.";
}

std::ostream&	operator<<(std::ostream& stream, ClapTrap const& cl)
{
	cl.display(stream);
	return (stream);
}


// ClapTrap::std::string getName() const {
//     reuturn (this->name);
// }

void ClapTrap::attack(const std::string& target) {
    if (this->health == 0) std::cout << "PLS STOP CLAPTRAP IS DEAD!" << std::endl;
    else if (this->energy > 0) {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->damage << " points of damage!" << std::endl;
        this->energy--;

    }
    else std::cout << this->name << " doesn't have more energy!" << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->energy > 0 && health > 0) {
        std::cout << "ClapTrap " << this->name << " is being repaired with " << amount << " points!" << std::endl;
        this->energy--;
        this->health += amount;
        if (this->health > 10) this->health = 10;
    }
    else if (this->energy > 0) std::cout << this->name << " doesn't have more energy!" << std::endl;
    else std::cout << this->name << " is dead!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->health > amount) {
        std::cout << "Oh nooo! " << this->name << " has taken " << amount << " points of damage!" << std::endl;
        this->health-=amount;
    }
    else std::cout << this->name << " is dead." << std::endl;
}
