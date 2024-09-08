/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 20:10:27 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/09/07 20:53:57 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal {
    protected:
        std::string type;
        Animal();
        Animal(std::string t);
    
    public:
        Animal(Animal & cpy);
        virtual ~Animal();
		Animal & operator=(Animal const & cpy);
        virtual void makeSound() const = 0;
        std::string getType() const;
};

#endif
