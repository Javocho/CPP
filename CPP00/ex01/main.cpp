/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 15:13:28 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/08/09 19:38:01 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main() {
    Phonebook p;
    std::string s;

    while (s != "EXIT") {
        if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
        std::cout << "Blackberry >";
        
        std::getline(std::cin, s);
        if (s == "ADD") {
            p.add();
        }
        else if (s == "SEARCH") {
            p.search();
        }
    }
}