/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 18:30:51 by javocho           #+#    #+#             */
/*   Updated: 2024/08/27 17:39:27 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	a;
	ScavTrap	b("Morgan");
	ClapTrap	c("Hugues");

	std::cout << c << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	b.takeDamage(3);
	std::cout << b << std::endl;
	b.takeDamage(20);
	std::cout << b << std::endl;
	b.beRepaired(3);
	std::cout << b << std::endl;
	b.attack("Eric");
	b.attack("Eric");
	std::cout << b << std::endl;
	b.attack("Eric");
	std::cout << b << std::endl;
	b.beRepaired(6);
	std::cout << b << std::endl;
	b.attack("Eric");
}