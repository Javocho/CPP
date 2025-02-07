/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 19:01:45 by javocho           #+#    #+#             */
/*   Updated: 2025/02/06 19:24:34 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 19:20:00 by javocho           #+#    #+#             */
/*   Updated: 2025/02/06 19:50:00 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template<typename T>
class Array {
private:
    T* _elements;
    unsigned int _size;

public:
    Array() : _elements(new T[0]), _size(0) {}

    Array(unsigned int n) : _elements(new T[n]), _size(n) {
        for (unsigned int i = 0; i < _size; i++)
            _elements[i] = T();  
    }

    Array(const Array &other) : _elements(new T[other._size]), _size(other._size) {
        for (unsigned int i = 0; i < _size; i++)
            _elements[i] = other._elements[i];
    }

    Array &operator=(const Array &other) {
        if (this != &other) {
            delete[] _elements;
            _size = other._size;
            _elements = new T[_size];
            for (unsigned int i = 0; i < _size; i++)
                _elements[i] = other._elements[i];
        }
        return *this;
    }

    ~Array() {
        delete[] _elements;
    }

    // Operador de acceso []
    T &operator[](unsigned int index) {
        if (index >= _size)
            throw OutOfBoundsException();
        return _elements[index];
    }

    const T &operator[](unsigned int index) const {
        if (index >= _size)
            throw OutOfBoundsException();
        return _elements[index];
    }

    unsigned int size() const {
        return _size;
    }

    class OutOfBoundsException : public std::exception {
    public:
        virtual const char* what() const throw() {
            return "Index out of bounds";
        }
    };
};

#endif 