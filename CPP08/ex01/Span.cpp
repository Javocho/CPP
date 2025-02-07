/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:58:28 by javocho           #+#    #+#             */
/*   Updated: 2025/02/07 18:07:24 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _maxSize(N) {}

Span::Span(const Span &other) {
    *this = other;
}

Span &Span::operator=(const Span &other) {
    if (this != &other) {
        this->_maxSize = other._maxSize;
        this->_numbers = other._numbers;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int number) {
    if (_numbers.size() >= _maxSize)
        throw Span::SpanFullException();
    _numbers.push_back(number);
}

int Span::shortestSpan() const {
    if (_numbers.size() < 2)
        throw Span::NotEnoughNumbersException();

    std::vector<int> sorted = _numbers;
    std::sort(sorted.begin(), sorted.end());

    int minSpan = sorted[1] - sorted[0];
    for (size_t i = 1; i < sorted.size() - 1; ++i) {
        int diff = sorted[i + 1] - sorted[i];
        if (diff < minSpan)
            minSpan = diff;
    }
    return minSpan;
}

int Span::longestSpan() const {
    if (_numbers.size() < 2)
        throw Span::NotEnoughNumbersException();

    int minVal = *std::min_element(_numbers.begin(), _numbers.end());
    int maxVal = *std::max_element(_numbers.begin(), _numbers.end());

    return maxVal - minVal;
}

void Span::printNumbers() const {
    std::cout << "Stored numbers: ";
    for (size_t i = 0; i < _numbers.size(); ++i) {
        std::cout << _numbers[i] << " ";
    }
    std::cout << std::endl;
}

const char* Span::SpanFullException::what() const throw() {
    return "Error: Cannot add more numbers, Span is full!";
}

const char* Span::NotEnoughNumbersException::what() const throw() {
    return "Error: Not enough numbers to find a span!";
}
