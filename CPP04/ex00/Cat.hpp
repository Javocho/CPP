/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 20:13:42 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/09/07 12:09:36 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal {
    protected:

    public:
        Cat();
        Cat(Cat & cpy);
        ~Cat();
		Cat & operator=(Cat const & cpy);
        void makeSound() const;
};

#endif