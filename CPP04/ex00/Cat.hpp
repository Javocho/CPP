/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 20:13:42 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/09/07 20:12:28 by fcosta-f         ###   ########.fr       */
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
        virtual ~Cat();
		Cat & operator=(Cat const & cpy);
        virtual void makeSound() const;
};

#endif