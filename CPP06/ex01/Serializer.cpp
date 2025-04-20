/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 21:48:48 by javocho           #+#    #+#             */
/*   Updated: 2025/04/14 15:05:15 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


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
