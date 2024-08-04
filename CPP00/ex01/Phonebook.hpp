/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 15:11:51 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/08/04 17:03:07 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

#include "Contact.hpp"

class	Phonebook
{
	private:
        int index;
		int size;
		Contact	contacts[8];

	public:
		Phonebook();
		~Phonebook();
        
		void	add();
		void	search();
		void	print(Contact contact);
		void	list_contacts();
		
        Contact	get_contact(int index);
};

#endif