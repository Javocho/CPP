/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 21:32:06 by javocho           #+#    #+#             */
/*   Updated: 2025/01/17 21:32:07 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    std::cout << "=== Testing Bureaucrat Creation ===" << std::endl;

    // Caso válido
    try {
        Bureaucrat b1("Alice", 100);
        std::cout << b1;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    // Rango demasiado alto
    try {
        Bureaucrat b2("Bob", 0); // Debería lanzar GradeTooHighException
    } catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    // Rango demasiado bajo
    try {
        Bureaucrat b3("Charlie", 151); // Debería lanzar GradeTooLowException
    } catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n=== Testing Promotions and Demotions ===" << std::endl;

    // Promoción desde rango 2 a 1 (caso límite superior)
    try {
        Bureaucrat b4("Dave", 2);
        std::cout << b4;
        b4.promote(); // Ahora rango 1
        std::cout << b4;
        b4.promote(); // Esto debería lanzar GradeTooHighException
    } catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    // Degradación desde rango 149 a 150 (caso límite inferior)
    try {
        Bureaucrat b5("Eve", 149);
        std::cout << b5;
        b5.demote(); // Ahora rango 150
        std::cout << b5;
        b5.demote(); // Esto debería lanzar GradeTooLowException
    } catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n=== Testing Copy Constructor and Assignment ===" << std::endl;

    // Constructor de copia
    try {
        Bureaucrat b6("Frank", 50);
        std::cout << b6;
        Bureaucrat b7 = b6; // Constructor de copia
        std::cout << b7;
    } catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    // Operador de asignación
    try {
        Bureaucrat b8("Grace", 75);
        Bureaucrat b9("Henry", 125);
        std::cout << b8;
        std::cout << b9;
        b8 = b9; // Operador de asignación
        std::cout << "After assignment:" << std::endl;
        std::cout << b8;
    } catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n=== Testing Stream Overload ===" << std::endl;

    // Sobrecarga del operador <<
    try {
        Bureaucrat b10("Ivy", 15);
        std::cout << b10;
    } catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
