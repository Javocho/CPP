/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 15:04:47 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/08/04 16:20:43 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_num;
        std::string secret;

    public:
        Contact();
        ~Contact();
        
        std::string	get_first_name() const;
		std::string	get_last_name() const;
		std::string	get_nickname() const;
		std::string	get_phone_num() const;
		std::string	get_secret() const;
        
        void		set_first_name(std::string str);
		void		set_last_name(std::string str);
		void		set_nickname(std::string str);
		void		set_phone_num(std::string str);
		void		set_secret(std::string str);
};
        
#endif