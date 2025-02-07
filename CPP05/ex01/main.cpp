/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 21:32:06 by javocho           #+#    #+#             */
/*   Updated: 2025/01/20 12:30:30 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main() {
    // Crear un Bureaucrat válido
    Bureaucrat john("John", 50);
    std::cout << john << std::endl;

    // Crear un Form válido
    Form taxForm("Tax Form", 49, 75);
    std::cout << taxForm << std::endl;

    // Intentar que el Bureaucrat firme el Form
    try {
        john.signForm(taxForm);
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    // Promover al Bureaucrat y volver a intentar firmar
    john.promote(); // Grado: 49
    std::cout << "Promoted John: " << john << std::endl;

    try {
        john.signForm(taxForm); // Ahora debe ser exitoso
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
