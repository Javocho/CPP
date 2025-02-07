/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:03:44 by javocho           #+#    #+#             */
/*   Updated: 2025/02/07 19:05:14 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// Constructor
PmergeMe::PmergeMe() {}

// Constructor de copia
PmergeMe::PmergeMe(const PmergeMe &other) {
    *this = other;
}

// Operador de asignación
PmergeMe &PmergeMe::operator=(const PmergeMe &other) {
    if (this != &other) {
        _vectorData = other._vectorData;
        _dequeData = other._dequeData;
    }
    return *this;
}

// Destructor
PmergeMe::~PmergeMe() {}

template <typename T>
void PmergeMe::mergeInsertionSort(T &container) {
    if (container.size() <= 1) return;

    typename T::iterator mid = container.begin() + (container.size() / 2);
    T left(container.begin(), mid);
    T right(mid, container.end());

    mergeInsertionSort(left);
    mergeInsertionSort(right);

    std::merge(left.begin(), left.end(), right.begin(), right.end(), container.begin());
}

void PmergeMe::sortAndMeasure(const std::string &input) {
    std::istringstream iss(input);
    int num;

    while (iss >> num) {
        if (num < 0)
            throw InvalidInputException();
        _vectorData.push_back(num);
        _dequeData.push_back(num);
    }

    if (_vectorData.empty())
        throw InvalidInputException();

    clock_t startVec = clock();
    mergeInsertionSort(_vectorData);
    clock_t endVec = clock();
    double timeVec = static_cast<double>(endVec - startVec) / CLOCKS_PER_SEC;

    clock_t startDeq = clock();
    mergeInsertionSort(_dequeData);
    clock_t endDeq = clock();
    double timeDeq = static_cast<double>(endDeq - startDeq) / CLOCKS_PER_SEC;

    std::cout << "Sorted vector: ";
    for (size_t i = 0; i < _vectorData.size(); i++)
        std::cout << _vectorData[i] << " ";
    std::cout << std::endl;

    std::cout << "Sorted deque: ";
    for (size_t i = 0; i < _dequeData.size(); i++)
        std::cout << _dequeData[i] << " ";
    std::cout << std::endl;

    std::cout << "Vector sorting time: " << timeVec << " seconds" << std::endl;
    std::cout << "Deque sorting time: " << timeDeq << " seconds" << std::endl;
}

const char *PmergeMe::InvalidInputException::what() const throw() {
    return "Error: Invalid input. Only positive integers allowed.";
}
