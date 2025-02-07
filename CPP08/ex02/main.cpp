/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:14:44 by javocho           #+#    #+#             */
/*   Updated: 2025/02/07 18:18:04 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"

void testBasicOperations() {
    std::cout << "Test básico con MutantStack" << std::endl;

    MutantStack<int> mstack;
    mstack.push(10);
    mstack.push(20);
    mstack.push(30);
    
    std::cout << "Top: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Top después de pop: " << mstack.top() << std::endl;
    std::cout << "Tamaño: " << mstack.size() << std::endl;
}

void testIterators() {
    std::cout << "\nTest de iteradores" << std::endl;

    MutantStack<int> mstack;
    for (int i = 1; i <= 5; i++)
        mstack.push(i * 10);

    std::cout << "Elementos con iterador normal: ";
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "Elementos con iterador reverso: ";
    for (MutantStack<int>::reverse_iterator rit = mstack.rbegin(); rit != mstack.rend(); ++rit)
        std::cout << *rit << " ";
    std::cout << std::endl;
}

void testCopyAssignment() {
    std::cout << "\nTest de copia y asignación" << std::endl;

    MutantStack<int> original;
    original.push(100);
    original.push(200);
    original.push(300);

    MutantStack<int> copy(original);
    MutantStack<int> assigned;
    assigned = original;

    std::cout << "Original: ";
    for (MutantStack<int>::iterator it = original.begin(); it != original.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "Copia: ";
    for (MutantStack<int>::iterator it = copy.begin(); it != copy.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "Asignación: ";
    for (MutantStack<int>::iterator it = assigned.begin(); it != assigned.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

int main() {
    testBasicOperations();
    testIterators();
    testCopyAssignment();
    return 0;
}
