/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 18:00:38 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/09/01 19:12:55 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    Harl harl;

    std::cout << "Complaining with level: DEBUG" << std::endl;
    harl.complain("DEBUG");

    std::cout << "\nComplaining with level: INFO" << std::endl;
    harl.complain("INFO");

    std::cout << "\nComplaining with level: WARNING" << std::endl;
    harl.complain("WARNING");

    std::cout << "\nComplaining with level: ERROR" << std::endl;
    harl.complain("ERROR");

    std::cout << "\nComplaining with an unknown level: UNKNOWN" << std::endl;
    harl.complain("UNKNOWN");

    return 0;
}
