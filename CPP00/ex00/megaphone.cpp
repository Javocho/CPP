/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 14:54:01 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/08/04 14:57:26 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv) {
    int i;
	int j = 1;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
        {
			std::cout << (char)std::toupper(argv[j][i]);
            i++;
        }
        j++;
	}
	std::cout << std::endl;
	return (0);    
}