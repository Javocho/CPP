/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:05:26 by javocho           #+#    #+#             */
/*   Updated: 2025/04/16 12:28:51 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv) {
    try {
        if (argc > 2) {
            PmergeMe<std::deque<int> > dqSorter(argv);
            PmergeMe<std::vector<int> > vecSorter(argv);

            std::cout << "Input:  " << dqSorter << std::endl;

            dqSorter.runSort();
            vecSorter.runSort();

            std::cout << "Sorted: " << dqSorter << std::endl;

            dqSorter.showTime();
            vecSorter.showTime();
        } else {
            throw "Invalid input";
        }
    } catch (...) {
        std::cerr << "Error" << std::endl;
    }
    return 0;
}
