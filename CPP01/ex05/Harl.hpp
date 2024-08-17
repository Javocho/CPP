/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 23:56:15 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/08/17 17:59:54 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl {
	private:
		void debug(void) const;
		void info(void) const;	
		void warning(void) const;	
		void error(void) const;	

		typedef void (Harl::*Func_p)() const;
	public:
		Harl();
		~Harl();

		void complain(std::string level) const;
	};

#endif