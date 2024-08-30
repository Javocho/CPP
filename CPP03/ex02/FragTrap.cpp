/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 19:36:34 by javocho           #+#    #+#             */
/*   Updated: 2024/08/30 19:47:51 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
    this->health = 100;
    this->energy = 100;
    this->damage = 30;
    std::cout  << "FragTrap created" << std::endl;
}

FragTrap::FragTrap(const std::string &name): ClapTrap(name) {
    //name ya se setea en el de ClapTrap
    this->health = 100;
    this->energy = 100;
    this->damage = 30;
    std::cout  << "FragTrap created" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destroyed" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &cpy) {
	std::cout << "FragTrap = called" << std::endl;
	this->name = cpy.name;
	this->health = cpy.health;
	this->energy= cpy.energy;
	this->damage = cpy.damage;
	return *this;
}


void	FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->name << ": Do you want a high five?\t" << std::endl;
}