/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:36:06 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/09/07 20:43:55 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain created" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destroyed" << std::endl;
}

Brain::Brain(Brain & cpy)
{
	for(int i = 0; i < 100; i++)
	    this->ideas[i] = cpy.ideas[i];
	std::cout << "Brain was constructed from a copy\n" << std::endl;
}

Brain & Brain::operator=(Brain const & cpy)
{
    for(int i = 0; i < 100; i++)
	    this->ideas[i] = cpy.ideas[i];
	return (*this);
}