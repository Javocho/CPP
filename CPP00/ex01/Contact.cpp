/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 16:13:22 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/08/04 16:14:32 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string	Contact::get_first_name() const
{
	return (this->first_name);
}

std::string	Contact::get_last_name() const
{
	return (this->last_name);
}

std::string	Contact::get_nickname() const
{
	return (this->nickname);
}

std::string	Contact::get_phone_num() const
{
	return (this->phone_num);
}

std::string	Contact::get_secret() const
{
	return (this->secret);
}

void	Contact::set_first_name(std::string str)
{
	this->first_name = str;
}

void	Contact::set_last_name(std::string str)
{
	this->last_name = str;
}

void	Contact::set_nickname(std::string str)
{
	this->nickname = str;
}

void	Contact::set_phone_num(std::string str)
{
	this->phone_num = str;
}

void	Contact::set_secret(std::string str)
{
	this->secret = str;
}