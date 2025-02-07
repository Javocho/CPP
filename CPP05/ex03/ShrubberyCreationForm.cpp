/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:02:11 by javocho           #+#    #+#             */
/*   Updated: 2025/01/20 13:11:57 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <string>
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other)
{
	*this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	_target = other._target;
	setIsSigned(other.getIsSigned());
	return (*this);
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}


void ShrubberyCreationForm::performAction() const
{
	std::ofstream outFile((_target + std::string("_shrubbery")).c_str());

	if (outFile)
	{
		outFile << "        _-_        \n";
		outFile << "     /~~   ~~\\     \n";
		outFile << "  /~~         ~~\\  \n";
		outFile << " {               } \n";
		outFile << "  \\  _-     -_  /  \n";
		outFile << "    ~  \\\\ //  ~    \n";
		outFile << " _- -   | | _- _   \n";
		outFile << "   _ -  | |   -_   \n";
		outFile << "        |||        \n";
		outFile << "        |||        \n";
		outFile << "        |||        \n";
		outFile << "      =======      \n";

		outFile.close();
	}
	else
		throw ShrubberyCreationForm::OpenFileExeption();
		
}

const char *ShrubberyCreationForm::OpenFileExeption::what() const throw()
{
	return ("Could not open and write the file!");
}