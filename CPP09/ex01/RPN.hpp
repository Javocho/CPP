/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:54:45 by javocho           #+#    #+#             */
/*   Updated: 2025/02/07 18:57:15 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>
#include <stdexcept>

class RPN {
private:
    std::stack<int> _stack;

    void applyOperation(char op);

public:
    RPN();
    RPN(const RPN &other);
    RPN &operator=(const RPN &other);
    ~RPN();

    int evaluate(const std::string &expression);

    class InvalidExpressionException : public std::exception {
    public:
        const char *what() const throw();
    };

    class DivisionByZeroException : public std::exception {
    public:
        const char *what() const throw();
    };
};

#endif
