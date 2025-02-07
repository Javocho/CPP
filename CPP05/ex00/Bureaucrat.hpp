/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 23:13:22 by javocho           #+#    #+#             */
/*   Updated: 2025/01/20 11:29:38 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

class Bureaucrat {
    public:
        Bureaucrat(std::string const name, int grade);
        Bureaucrat(int grade);
		Bureaucrat(const std::string name);
        Bureaucrat();
        Bureaucrat(Bureaucrat const &copy);
        ~Bureaucrat();

        Bureaucrat	&operator=(Bureaucrat const &b);

        void promote();
        void demote();
        
        const std::string	getName() const;
	    int getGrade() const;
        void setGrade(int grade);
        class		GradeTooHighException : public std::exception {
            const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            const char* what() const throw();
        };

    private:
        const std::string _name;
        int _grade;

};

//overload global
std::ostream &operator<<(std::ostream &o, const Bureaucrat &a);

#endif