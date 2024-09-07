/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 20:13:13 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/09/07 20:13:41 by fcosta-f         ###   ########.fr       */
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
        virtual ~Dog();
		Dog & operator=(Dog const & cpy);
        virtual void makeSound() const;
};

#endif