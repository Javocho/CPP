/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:47:50 by javocho           #+#    #+#             */
/*   Updated: 2025/02/07 18:00:04 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <stdexcept>

class Span {
private:
    std::vector<int> _numbers;
    unsigned int _maxSize;

public:
    Span(unsigned int N);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();

    void addNumber(int number);
    template<typename T>
    void addNumbers(T begin, T end) {
        if (_numbers.size() + std::distance(begin, end) > _maxSize)
            throw Span::SpanFullException();
        _numbers.insert(_numbers.end(), begin, end);
    }

    int shortestSpan() const;
    int longestSpan() const;
    void printNumbers() const;

    class SpanFullException : public std::exception {
    public:
        const char* what() const throw();
    };

    class NotEnoughNumbersException : public std::exception {
    public:
        const char* what() const throw();
    };
};

#endif
