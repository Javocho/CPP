/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:23:29 by javocho           #+#    #+#             */
/*   Updated: 2024/09/07 12:24:37 by javocho          ###   ########.fr       */
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
		~WrongCat();
		WrongCat(WrongCat & cpy);
		WrongCat & operator=(WrongCat const & cpy);
		void makeSound() const;
};

#endif