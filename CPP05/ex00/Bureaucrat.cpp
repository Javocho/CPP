/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 23:49:48 by javocho           #+#    #+#             */
/*   Updated: 2025/01/20 11:47:24 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//Constructors 
Bureaucrat::Bureaucrat(void): _name("default"), _grade(150)
{
	std::cout << "Bureaucrat default name: " << this->getName() <<
	" with grade:  " << this->getGrade() << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): _name(copy.getName())
{
	std::cout << "Bureaucrat Copy Constructor name: " << copy.getName() <<
	" grade: " << this->getName() << std::endl;
	*this = copy;
}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrat constructor name: " << this->getName() <<
	" grade: " << grade << std::endl;
	this->setGrade(grade);
}

// Deconstructors
Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Deconstructor name: " << this->getName() << " called" << std::endl;
}

// Overloaded Operators
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	std::cout << "Bureaucrat Assignation operator called" << std::endl;
	if (this == &src)
		return *this;

	this->_grade = src.getGrade();
	return *this;
}

//Setters, getters
const std::string Bureaucrat::getName() const {
    return _name;  
}

int Bureaucrat::getGrade() const {
    return _grade;
}

void Bureaucrat::setGrade(int grade) {
    this->_grade = grade;
}

//public functions 
//rango 1 es el mejor y 150 el mejor
void	Bureaucrat::promote()
{
	if (_grade == 1)
		throw GradeTooHighException();
    std::cout << "Incrementing grade of: " << this->getName() << std::endl;
    this->setGrade(this->_grade - 1);
}

void	Bureaucrat::demote()
{
	if (_grade == 150)
		throw GradeTooLowException();
    std::cout << "Decrementing grade of: " << this->getName() << std::endl;
    this->setGrade(this->_grade + 1);
}

//Exceptions
const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
};

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &a)
{
	o << "Bureaucrat " << a.getName() << ":\n\tgrade: " << a.getGrade() << std::endl;
	return (o);
}