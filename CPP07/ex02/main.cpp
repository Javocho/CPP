/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 19:24:59 by javocho           #+#    #+#             */
/*   Updated: 2025/02/06 19:26:11 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void testIntegers() {
    std::cout << "🔹 PRUEBA CON int" << std::endl;
    Array<int> arr(5);
    for (unsigned int i = 0; i < arr.size(); i++)
        arr[i] = (i + 1) * 10;
    for (unsigned int i = 0; i < arr.size(); i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

void testDoubles() {
    std::cout << "\n🔹 PRUEBA CON double" << std::endl;
    Array<double> arr(3);
    for (unsigned int i = 0; i < arr.size(); i++)
        arr[i] = (i + 1) * 1.1;
    for (unsigned int i = 0; i < arr.size(); i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

void testStrings() {
    std::cout << "\n🔹 PRUEBA CON std::string" << std::endl;
    Array<std::string> arr(3);
    arr[0] = "Hola";
    arr[1] = "Mundo";
    arr[2] = "CPP07";
    for (unsigned int i = 0; i < arr.size(); i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

void testOutOfBounds() {
    std::cout << "\n🔹 PRUEBA DE ACCESO FUERA DE RANGO" << std::endl;
    try {
        Array<int> arr(3);
        std::cout << arr[10] << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Excepción atrapada: " << e.what() << std::endl;
    }
}

void testCopyAssignment() {
    std::cout << "\n🔹 PRUEBA DE COPIA Y ASIGNACIÓN" << std::endl;
    Array<int> original(3);
    for (unsigned int i = 0; i < original.size(); i++)
        original[i] = i * 5;
    Array<int> copy(original);
    Array<int> assigned = original;
    std::cout << "Original: ";
    for (unsigned int i = 0; i < original.size(); i++)
        std::cout << original[i] << " ";
    std::cout << std::endl;
    std::cout << "Copia: ";
    for (unsigned int i = 0; i < copy.size(); i++)
        std::cout << copy[i] << " ";
    std::cout << std::endl;
    std::cout << "Asignado: ";
    for (unsigned int i = 0; i < assigned.size(); i++)
        std::cout << assigned[i] << " ";
    std::cout << std::endl;
}

int main() {
    testIntegers();
    testDoubles();
    testStrings();
    testOutOfBounds();
    testCopyAssignment();
    return 0;
}
