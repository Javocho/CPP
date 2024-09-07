/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 20:10:27 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/09/07 12:09:41 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
    protected:
        std::string type;
    
    public:
        Animal();
        Animal(std::string t);
        Animal(Animal & cpy);
        ~Animal();
		Animal & operator=(Animal const & cpy);
        virtual void makeSound() const;
        std::string getType() const;
};

#endif
