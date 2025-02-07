/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:19:52 by javocho           #+#    #+#             */
/*   Updated: 2025/01/20 12:26:45 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default"), _is_signed(false), _grade_to_sign(150), _grade_to_execute(150)
{

}

Form::Form(const std::string name, const int grade_to_sign, const int grade_to_execute) : _name(name), _is_signed(false), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute)
{

}

Form::Form(const Form &src) : _name(src._name), _is_signed(src._is_signed), _grade_to_sign(src._grade_to_sign), _grade_to_execute(src._grade_to_execute)
{

}

Form &Form::operator=(const Form &src)
{
	_is_signed = src._is_signed;
    //resto atributos ctes
	return (*this);
}

Form::~Form()
{
	
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _grade_to_sign)
		_is_signed = true;
	else
		throw GradeTooLowException();
}


std::string Form::getName() const
{
	return (_name);
}

bool Form::getIsSigned() const
{
	return (_is_signed);
}

int Form::getGradeToSign() const
{
	return (_grade_to_sign);
}

int Form::getGradeToExecute() const
{
	return (_grade_to_execute);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}


std::ostream &operator<<(std::ostream &os,  Form const &form)
{
	os << "Name: " << form.getName() << " isSigned: " << form.getIsSigned() << " SignGrade: " << form.getGradeToSign() << " ExecuteGrade: " << form.getGradeToExecute() << std::endl;
	return (os);
}