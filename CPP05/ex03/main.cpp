#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main() {
    try {
        // Crear un Bureaucrat con grado suficiente para firmar y ejecutar formularios
        Bureaucrat john("John", 5);
        std::cout << john << std::endl;

        // Crear un Intern
        Intern someIntern;

        // Probar creación de formularios por el Intern
        AForm *shrubberyForm = someIntern.makeForm("ShrubberyCreationForm", "Garden");
        if (shrubberyForm) {
            std::cout << *shrubberyForm << std::endl;
            john.signForm(*shrubberyForm);
            john.executeForm(*shrubberyForm);
        }
        delete shrubberyForm;

        AForm *robotomyForm = someIntern.makeForm("RobotomyRequestForm", "Robot");
        if (robotomyForm) {
            std::cout << *robotomyForm << std::endl;
            john.signForm(*robotomyForm);
            john.executeForm(*robotomyForm);
        }
        delete robotomyForm;

        AForm *pardonForm = someIntern.makeForm("PresidentialPardonForm", "Criminal");
        if (pardonForm) {
            std::cout << *pardonForm << std::endl;
            john.signForm(*pardonForm);
            john.executeForm(*pardonForm);
        }
        delete pardonForm;

        // Probar caso de formulario desconocido
        AForm *unknownForm = someIntern.makeForm("unknown form", "Target");
        if (!unknownForm) {
            std::cout << "Intern could not create the requested form." << std::endl;
        }

    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
