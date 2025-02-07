/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 21:48:48 by javocho           #+#    #+#             */
/*   Updated: 2025/02/01 12:38:38 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

//mirar si tipo está bien, no me dejaba uintptr_t

Serializer::Serializer(void)
{
}

Serializer::Serializer(Serializer const &other)
{
	*this = other;
}


Serializer &Serializer::operator=(Serializer const &other)
{
	if (this != &other)
	{
		*this = other;
	}
	return (*this);
}

Serializer::~Serializer(void)
{
}


unsigned long Serializer::serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
}
