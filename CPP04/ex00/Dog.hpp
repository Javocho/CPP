/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 20:13:13 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/09/07 12:09:30 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal {
    protected:

    public:
        Dog();
        Dog(Dog & cpy);
        ~Dog();
		Dog & operator=(Dog const & cpy);
        void makeSound() const;
};

#endif