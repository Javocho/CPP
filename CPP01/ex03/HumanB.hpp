/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:31:50 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/08/16 18:49:31 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	private:
		std::string name;
		Weapon *w; //pasado por referencia (siempre misma arma)

	public:
		HumanB(std::string name);
		~HumanB();

		void setWeapon(Weapon &w);

		void attack() const;
};

#endif