/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:05:26 by javocho           #+#    #+#             */
/*   Updated: 2025/02/07 19:05:28 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " \"list of numbers\"" << std::endl;
        return 1;
    }

    try {
        std::string input;
        for (int i = 1; i < argc; ++i) {
            if (i > 1)
                input += " ";
            input += argv[i];
        }

        PmergeMe sorter;
        sorter.sortAndMeasure(input);
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}
