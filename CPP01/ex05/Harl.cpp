/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 23:59:43 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/08/17 13:00:03 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {

}

Harl::~Harl() {

}

void	Harl::debug(void) const {
	std::cout << "[ DEBUG ]\nI love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl << std::endl;
}

void	Harl::info(void) const {
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon cost more money. You don't put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}

void	Harl::warning(void) const {
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I've been coming here for years and you just started working here last month." << std::endl << std::endl;
}

void	Harl::error(void) const {
	std::cout << "[ ERROR ]\nThis is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
}

int getLevel(std::string level) {
	const std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int		levelnum = -1;

	for (int i = 0; i < 4 and levelnum == -1; i++) {
		if (level == levels[i]) levelnum = i;
	}
	return (levelnum);
}

void Harl::complain(std::string level) const {
	const Func_p messages[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int level_num = getLevel(level);

	if (level_num == -1) std::cout << "Invalid level";
	else (this->*(messages[level_num]))();
}