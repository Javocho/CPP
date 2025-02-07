/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 21:48:55 by javocho           #+#    #+#             */
/*   Updated: 2025/01/29 21:50:53 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

#include <iostream>

int main() {
    Data originalData;
    originalData.name = "Alice";
    originalData.age = 30;

    std::cout << "Original Data address: " << &originalData << std::endl;

    // Serializar el puntero
    unsigned long raw = Serializer::serialize(&originalData);
    std::cout << "Serialized unsigned long: " << raw << std::endl;

    // Deserializar
    Data* deserializedData = Serializer::deserialize(raw);
    std::cout << "Deserialized Data address: " << deserializedData << std::endl;

    // Verificar que los datos se conservan
    std::cout << "Name: " << deserializedData->name << ", Age: " << deserializedData->age << std::endl;

    return 0;
}
