/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 18:52:15 by javocho           #+#    #+#             */
/*   Updated: 2025/02/06 18:54:22 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void printElement(const T &element) {
    std::cout << element << " ";
}

template<typename T>
void multiplyByTwo(T &element) {
    element *= 2;
}

void toUppercase(char &c) {
    if (c >= 'a' && c <= 'z') 
        c -= 32;
}

int main() {
    std::cout << "🔹 PRUEBA CON int" << std::endl;
    int arrInt[] = {1, 2, 3, 4, 5};
    iter(arrInt, 5, printElement<int>);
    std::cout << std::endl;

    iter(arrInt, 5, multiplyByTwo<int>);
    iter(arrInt, 5, printElement<int>);
    std::cout << std::endl;

    std::cout << "\n🔹 PRUEBA CON double" << std::endl;
    double arrDouble[] = {1.1, 2.2, 3.3, 4.4};
    iter(arrDouble, 4, printElement<double>);
    std::cout << std::endl;

    std::cout << "\n🔹 PRUEBA CON std::string" << std::endl;
    std::string arrString[] = {"Hola", "mundo", "C++"};
    iter(arrString, 3, printElement<std::string>);
    std::cout << std::endl;

    std::cout << "\n🔹 PRUEBA CON char" << std::endl;
    char arrChar[] = {'h', 'e', 'l', 'l', 'o'};
    iter(arrChar, 5, toUppercase);
    iter(arrChar, 5, printElement<char>);
    std::cout << std::endl;

    return 0;
}
