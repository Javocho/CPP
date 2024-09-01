/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 20:10:27 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/09/01 20:15:21 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Animal {
    protected:
        std::string type;
    
    public:
        Animal();
        Animal(std::string t);
        ~Animal();
};