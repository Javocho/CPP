/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 21:48:41 by javocho           #+#    #+#             */
/*   Updated: 2025/02/01 12:39:18 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "Data.hpp"
# include <stdint.h>

class Serializer {
private:
    Serializer(void);
    Serializer(Serializer const &other);
    Serializer &operator=(Serializer const &other);
    ~Serializer(void);
    
public:
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(unsigned long raw);
};

#endif
