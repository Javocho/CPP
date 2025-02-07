/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:57:40 by javocho           #+#    #+#             */
/*   Updated: 2025/02/07 18:58:50 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &other) {
    *this = other;
}

RPN &RPN::operator=(const RPN &other) {
    if (this != &other)
        this->_stack = other._stack;
    return *this;
}

RPN::~RPN() {}

void RPN::applyOperation(char op) {
    if (_stack.size() < 2)
        throw InvalidExpressionException();

    int b = _stack.top(); _stack.pop();
    int a = _stack.top(); _stack.pop();

    switch (op) {
        case '+': _stack.push(a + b); break;
        case '-': _stack.push(a - b); break;
        case '*': _stack.push(a * b); break;
        case '/':
            if (b == 0)
                throw DivisionByZeroException();
            _stack.push(a / b);
            break;
        default:
            throw InvalidExpressionException();
    }
}

int RPN::evaluate(const std::string &expression) {
    std::istringstream iss(expression);
    std::string token;

    while (iss >> token) {
        if (token.length() == 1 && std::string("+-*/").find(token) != std::string::npos) {
            applyOperation(token[0]);
        } else {
            std::istringstream numStream(token);
            int num;
            if (!(numStream >> num))
                throw InvalidExpressionException();
            _stack.push(num);
        }
    }

    if (_stack.size() != 1)
        throw InvalidExpressionException();

    return _stack.top();
}

const char *RPN::InvalidExpressionException::what() const throw() {
    return "Error: Invalid RPN expression.";
}

const char *RPN::DivisionByZeroException::what() const throw() {
    return "Error: Division by zero.";
}
