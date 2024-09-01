/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 15:43:16 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/08/09 19:44:04 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook() {
    this->index = 0;
    this->size = 0;
}

Phonebook::~Phonebook() {
}


static std::string	fix(std::string str, long unsigned max)
{
	if (str.size() > max)
	{
		str.resize(max);
		str[str.size() - 1] = '.';
	}
	return (str);
}


void Phonebook::add() {
    std::string s;
    
    s = "";
    while (!std::cin.eof() && s == "") {
        std::cout << "Enter a first name: ";
        std::getline(std::cin, s);
    }
    if (s != "")
        this->contacts[this->index].set_first_name(s);
    
    s = "";
    while (!std::cin.eof() && s == "") {
        std::cout << "Enter " << this->contacts[this->index].get_first_name() << "'s last name: ";
        std::getline(std::cin, s);
    }
	if (s != "")
		this->contacts[this->index].set_last_name(s);
    
    s = "";
    while (!std::cin.eof() && s == "") {
        std::cout << "Enter " << this->contacts[this->index].get_first_name() << "'s nickname: ";
        std::getline(std::cin, s);
    }
	if (s != "")
		this->contacts[this->index].set_nickname(s);
    
    s = "";
    while (!std::cin.eof() && s == "") {
        std::cout << "Enter " << this->contacts[this->index].get_first_name() << "'s phone number: ";
        std::getline(std::cin, s);
    }
	if (s != "")
		this->contacts[this->index].set_phone_num(s);

    s = "";
    while (!std::cin.eof() && s == "") {
        std::cout << "Enter " << this->contacts[this->index].get_first_name() << "'s darkest secret: ";
        std::getline(std::cin, s);
    }
	if (s != "")
		this->contacts[this->index].set_secret(s);

    ++index;
    if (index == 8) index = 0;
    if (size < 8) size++;
}

void	Phonebook::print(Contact contact)
{
	std::cout << std::endl << "Let me request contact info" << std::endl;
	if (!contact.get_first_name().size())
	{
		std::cout << "Fail!" << std::endl;
		return ;
	}
	std::cout << "First Name: " << fix(contact.get_first_name(),10) << std::endl;
	std::cout << "Last Name: " << fix(contact.get_last_name(),10) << std::endl;
	std::cout << "Nickname: " << fix(contact.get_nickname(),10) << std::endl;
	std::cout << "Phone Number: " << fix(contact.get_phone_num(),10) << std::endl;
	std::cout << "Darkest Secret: " << fix(contact.get_secret(),10) << std::endl;
}

Contact	Phonebook::get_contact(int index)
{
	return (this->contacts[index]);
}

void	Phonebook::list_contacts(void)
{
    int i = 0;
	std::cout << "\t---INDEX----FIRST_NAME--LAST_NAME--NICKNAME--" << std::endl;
	while (i < size)
	{
		std::cout << "\t|    " << i+1;
		std::cout << "|   " << fix(this->contacts[i].get_first_name(), 10);
		std::cout << "|   " << fix(this->contacts[i].get_last_name(), 10);
		std::cout << "|   " << fix(this->contacts[i].get_nickname(), 10);
		std::cout << "|   " << std::endl;
        i++;
	}
	std::cout << "\t---------------------------------------------" << std::endl;
}

void Phonebook::search() {
    std::string s = "";
    bool valid = 1;

    this->list_contacts();
    std::cout << "Select an index: ";
    if (std::getline(std::cin, s) && s != "" && !std::cin.eof())
	{
			while (not (s.size() == 1 and (s[0] >= '1' and s[0] <= '8') and \
                this->contacts[s[0] - 1 - '0'].get_first_name().size())) {
                std::cout << "Invalid index!" << std::endl;
                valid = 0;
                break;
            }
	}
    if (valid)
        this->print(this->contacts[s[0] - 1 - '0']);
}

