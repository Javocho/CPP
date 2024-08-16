/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 00:35:50 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/08/16 18:35:30 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	private:
		std::string name;
		Weapon &w; //pasado por referencia (siempre misma arma)

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

		void attack() const;
};

#endif