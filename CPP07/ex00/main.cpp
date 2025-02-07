/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 13:24:56 by javocho           #+#    #+#             */
/*   Updated: 2025/02/01 13:32:04 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main() {
    std::cout << "🔹 PRUEBAS CON int" << std::endl;
    int a = 5, b = 10;
    std::cout << "Antes de swap: a=" << a << ", b=" << b << std::endl;
    swap(a, b);
    std::cout << "Después de swap: a=" << a << ", b=" << b << std::endl;
    std::cout << "min(5, 10): " << min(a, b) << std::endl;
    std::cout << "max(5, 10): " << max(a, b) << std::endl;

    std::cout << "\n🔹 PRUEBAS CON double" << std::endl;
    double x = 3.5, y = 2.1;
    std::cout << "Antes de swap: x=" << x << ", y=" << y << std::endl;
    swap(x, y);
    std::cout << "Después de swap: x=" << x << ", y=" << y << std::endl;
    std::cout << "min(3.5, 2.1): " << min(x, y) << std::endl;
    std::cout << "max(3.5, 2.1): " << max(x, y) << std::endl;

    std::cout << "\n🔹 PRUEBAS CON std::string" << std::endl;
    std::string s1 = "apple", s2 = "banana";
    std::cout << "Antes de swap: s1=" << s1 << ", s2=" << s2 << std::endl;
    swap(s1, s2);
    std::cout << "Después de swap: s1=" << s1 << ", s2=" << s2 << std::endl;
    std::cout << "min(\"apple\", \"banana\"): " << ::min(s1, s2) << std::endl;
    std::cout << "max(\"apple\", \"banana\"): " << ::max(s1, s2) << std::endl;

    std::cout << "\n🔹 PRUEBAS CON char" << std::endl;
    char c1 = 'A', c2 = 'Z';
    std::cout << "Antes de swap: c1=" << c1 << ", c2=" << c2 << std::endl;
    swap(c1, c2);
    std::cout << "Después de swap: c1=" << c1 << ", c2=" << c2 << std::endl;
    std::cout << "min('A', 'Z'): " << min(c1, c2) << std::endl;
    std::cout << "max('A', 'Z'): " << max(c1, c2) << std::endl;

    return 0;
}
