/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 13:19:05 by javocho           #+#    #+#             */
/*   Updated: 2025/02/01 13:30:10 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include<iostream>
#include <string>

//funció genèrica
template<typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T min(const T &a, const T &b)
{
    return (a < b) ? a : b;
}

template<typename T>
T max(const T &a, const T &b)
{
    return (a > b) ? a : b;
}

#endif