/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 23:13:22 by javocho           #+#    #+#             */
/*   Updated: 2025/04/12 17:04:31 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>

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