/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:24:12 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/08/05 18:34:09 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
	private: 
		std::string name;

	public:
		Zombie();
		~Zombie();
		void announce(void);
		
};
	Zombie* newZombie(std::string name);
	void randomChump(std::string name);













#endif