/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:42:58 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/08/16 18:57:45 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

int main()
{

        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack(); 

        club.setType("some other type of club");
        bob.attack(); 

        club.setType("crude spiked club");
        HumanB jim("Jim");
        jim.attack(); 
        jim.setWeapon(club);
        jim.attack(); 

        club.setType("some other type of club");
        jim.attack(); 

    return 0;
}