/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:59:28 by javocho           #+#    #+#             */
/*   Updated: 2024/09/05 20:49:42 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
    protected: //LA CLAVE DE TODO AAAAA
        std::string name;
        unsigned int health;
        unsigned int energy;
        unsigned int damage;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(std::string name, unsigned int health, unsigned int energy, unsigned int damage);
        ~ClapTrap();
        ClapTrap(const ClapTrap &copy);
		ClapTrap &operator=(const ClapTrap &copy);

        void display(std::ostream& stream) const;
        
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};
    
    std::ostream&	operator<<(std::ostream& stream, ClapTrap const& cl);

#endif
