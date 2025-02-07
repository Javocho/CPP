/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 18:08:09 by javocho           #+#    #+#             */
/*   Updated: 2025/02/06 18:52:29 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <string>
# include<iostream>

template<typename T_array, typename T_function>
void iter(T_array *array, size_t length, T_function function)
{
	for (size_t i = 0; i < length; i++)
	{
		function(array[i]);
	}
}


#endif