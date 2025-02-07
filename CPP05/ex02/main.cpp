#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main() {
    try {
        // Crear un Bureaucrat con grado válido
        Bureaucrat john("John", 5);
        std::cout << john << std::endl;

        // Crear un ShrubberyCreationForm
        ShrubberyCreationForm shrubberyForm("garden");
        std::cout << shrubberyForm << std::endl;

        // Intentar firmar el formulario
        try {
            john.signForm(shrubberyForm);
        } catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }

        // Ejecutar el formulario
        try {
            john.executeForm(shrubberyForm);
        } catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }

        // Crear un RobotomyRequestForm
        RobotomyRequestForm robotomyForm("robot");
        std::cout << robotomyForm << std::endl;

        // Firmar y ejecutar RobotomyRequestForm
        try {
            john.signForm(robotomyForm);
            john.executeForm(robotomyForm);
        } catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }

        // Crear un PresidentialPardonForm
        PresidentialPardonForm pardonForm("criminal");
        std::cout << pardonForm << std::endl;

        // Firmar y ejecutar PresidentialPardonForm
        try {
            john.signForm(pardonForm);
            john.executeForm(pardonForm);
        } catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }

    } catch (const std::exception &e) {
        std::cerr << "Critical error: " << e.what() << std::endl;
    }

    return 0;
}
