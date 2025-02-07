/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:03:24 by javocho           #+#    #+#             */
/*   Updated: 2025/02/07 19:03:26 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <ctime>
#include <algorithm>
#include <iterator>
#include <sstream>

class PmergeMe {
private:
    std::vector<int> _vectorData;
    std::deque<int> _dequeData;

    template <typename T>
    void mergeInsertionSort(T &container);

    template <typename T>
    void merge(T &container, typename T::iterator left, typename T::iterator middle, typename T::iterator right);

public:
    PmergeMe();
    PmergeMe(const PmergeMe &other);
    PmergeMe &operator=(const PmergeMe &other);
    ~PmergeMe();

    void sortAndMeasure(const std::string &input);

    class InvalidInputException : public std::exception {
    public:
        const char *what() const throw();
    };
};

#endif
