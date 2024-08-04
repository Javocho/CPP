/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 15:11:51 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/08/04 16:20:50 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

#include "Contact.hpp"

class	Phonebook
{
	private:
        int index;
		Contact	contacts[8];

	public:
		Phonebook(void);
		~Phonebook(void);
        
		void	add(void);
		void	search(void);
		void	print(Contact contact);
		
        Contact	get_contact(int index);
};

#endif