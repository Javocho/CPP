/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:23:29 by javocho           #+#    #+#             */
/*   Updated: 2024/09/08 16:57:55 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	protected:

	public:
		WrongCat();
		virtual ~WrongCat();
		WrongCat(WrongCat & cpy);
		WrongCat & operator=(WrongCat const & cpy);
		void makeSound() const;
};

#endif

//If you delete a derived class object (e.g., WrongCat) 
//through a pointer to the base class (e.g., WrongAnimal), 
//the derived class’s destructor will not be called unless 
//the base class destructor is virtual.