/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:59:28 by javocho           #+#    #+#             */
/*   Updated: 2024/08/30 19:46:26 by javocho          ###   ########.fr       */
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

        std::string	getName(void) const;
		int		    getHealth(void) const;
		int		    getEnergy(void) const;
		int		    getDamage(void) const;
		void		setName(std::string name);
		void		setHealth(unsigned int h);
		void		setEnergy(unsigned int e);
		void		setDamage(unsigned int a);
};
    
    std::ostream&	operator<<(std::ostream& stream, ClapTrap const& cl);

#endif
