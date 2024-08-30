/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 19:32:18 by javocho           #+#    #+#             */
/*   Updated: 2024/08/30 19:44:39 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
    private:

    public:
        FragTrap();
        FragTrap(const FragTrap &copy);
        FragTrap(const std::string &name);
        
        ~FragTrap();

        FragTrap &operator=(const FragTrap &cpy);
        
        void highFivesGuys(void);
};



#endif