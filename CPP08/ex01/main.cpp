/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:07:38 by javocho           #+#    #+#             */
/*   Updated: 2025/02/07 18:08:41 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include "Span.hpp"

void testBasic() {
    std::cout << "Test básico con Span pequeño" << std::endl;
    
    try {
        Span sp(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        
        sp.printNumbers();
        
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

        sp.addNumber(42);  // Debería lanzar `SpanFullException`
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}

void testNotEnoughNumbers() {
    std::cout << "\nTest con insuficientes números" << std::endl;

    try {
        Span sp(10);
        sp.addNumber(42);

        sp.shortestSpan();  // Debería lanzar `NotEnoughNumbersException`
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}

void testLargeSpan() {
    std::cout << "\nTest con Span grande (10,000 números)" << std::endl;

    try {
        Span sp(10000);
        for (int i = 0; i < 10000; i++) {
            sp.addNumber(i * 3);
        }

        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}

void testAddMultipleNumbers() {
    std::cout << "\nTest agregando múltiples números con iteradores" << std::endl;

    try {
        Span sp(10);
        std::vector<int> vec;
        
        vec.push_back(1);
        vec.push_back(2);
        vec.push_back(3);
        vec.push_back(4);
        vec.push_back(5);
        vec.push_back(6);
        vec.push_back(7);
        vec.push_back(8);
        vec.push_back(9);
        vec.push_back(10);

        sp.addNumbers(vec.begin(), vec.end());
        sp.printNumbers();

        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

        sp.addNumber(11);  // Debería lanzar `SpanFullException`
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}

int main() {
    testBasic();
    testNotEnoughNumbers();
    testLargeSpan();
    testAddMultipleNumbers();
    
    return 0;
}
