/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:03:24 by javocho           #+#    #+#             */
/*   Updated: 2025/04/16 12:38:02 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <sstream>
#include <algorithm>
#include <ctime>
#include <iomanip>
#include <cmath>
#include <stdexcept>
#include <string>
#include <iterator>
#include <typeinfo>

template <typename Sequence>
class PmergeMe {
    Sequence data_;
public:
    typedef typename Sequence::value_type Value;
    typedef typename Sequence::iterator Iter;
    typedef typename Sequence::const_iterator ConstIter;

    PmergeMe();
    PmergeMe(char **args);
    void runSort();
    void showTime();
    Iter begin();
    Iter end();
    ConstIter begin() const;
    ConstIter end() const;

private:
    clock_t t_start_;
    clock_t t_end_;
    float calcTime();
    int jacobsthal(int k);
    size_t validateAndCount(std::string &str);
    void recursiveSort(Sequence &seq);
    void insertInto(Sequence &mainSeq, Sequence &pending, Value last, Sequence &tail, Sequence &base, bool hasOdd, int groupSize);
    std::string detectContainer();
};

template <typename Sequence>
std::ostream& operator<<(std::ostream &out, const PmergeMe<Sequence> &obj);

#include "PmergeMe.tpp"

#endif
