/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:25:51 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/09/07 20:43:04 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {
    protected:
        std::string ideas[100];
        
    public:
        Brain();
        ~Brain();
        Brain(Brain & cpy);
        Brain & operator=(Brain const & cpy);

};

#endif
