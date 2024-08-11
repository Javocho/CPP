/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:23:50 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/08/11 14:17:41 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *z = zombieHorde(20, "javier");

	for (int i = 0; i < 20; i++)
		z[i].announce();

	for (int i = 0; i < 20; ++i)
    	z[i].~Zombie();

	delete[] z;


	return (0);
}