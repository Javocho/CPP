/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 15:43:16 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/08/04 16:16:49 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook() {
    this->index = 0;
}

Phonebook::~Phonebook() {
}

void Phonebook::add() {
    std::string s;
    
    s = "";
    while (s == "") {
        std::cout << "Enter a first name: ";
        std::getline(std::cin, s);
    }
    this->contacts[this->index].set_first_name(s);
    
    s = "";
    while (s == "") {
        std::cout << "Enter " << this->contacts[this->index].get_first_name() << "'s last name: ";
        std::getline(std::cin, s);
    }
	if (s != "")
		this->contacts[this->index].set_last_name(s);
    
    s = "";
    while (s == "") {
        std::cout << "Enter " << this->contacts[this->index].get_first_name() << "'s nickname: ";
        std::getline(std::cin, s);
    }
	if (s != "")
		this->contacts[this->index].set_nickname(s);
    
    s = "";
    while (s == "") {
        std::cout << "Enter " << this->contacts[this->index].get_first_name() << "'s phone number: ";
        std::getline(std::cin, s);
    }
	if (s != "")
		this->contacts[this->index].set_phone_num(s);

    s = "";
    while (s == "") {
        std::cout << "Enter " << this->contacts[this->index].get_first_name() << "'s darkest secret: ";
        std::getline(std::cin, s);
    }
	if (s != "")
		this->contacts[this->index].set_secret(s);

    ++index;
    if (index == 8) index = 0;
}

void	Phonebook::print(Contact contact)
{
	std::cout << std::endl << "Let me request contact info" << std::endl;
	if (!contact.get_first_name().size())
	{
		std::cout << "Fail!" << std::endl;
		return ;
	}
	std::cout << "First Name: " << contact.get_first_name() << std::endl;
	std::cout << "Last Name: " << contact.get_last_name() << std::endl;
	std::cout << "Nickname: " << contact.get_nickname() << std::endl;
	std::cout << "Phone Number: " << contact.get_phone_num() << std::endl;
	std::cout << "Darkest Secret: " << contact.get_secret() << std::endl;
}

Contact	Phonebook::get_contact(int index)
{
	return (this->contacts[index]);
}

void Phonebook::search() {
    std::string s = "";

    std::cout << "Select an index: ";
    if (std::getline(std::cin, s) && s != "")
	{
			while (not (s.size() == 1 and (s[0] >= '1' and s[0] <= '8') and \
					this->contacts[s[0] - 1 - '0'].get_first_name().size())) {
    			std::cout << "Invalid index!" << std::endl;
                std::getline(std::cin, s);
            }
	}
    this->print(this->contacts[s[0] - 1 - '0']);
}

