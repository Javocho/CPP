/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:03:24 by javocho           #+#    #+#             */
/*   Updated: 2025/04/20 18:00:49 by fcosta-f         ###   ########.fr       */
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
bool isNonDisplayable(const std::string& str) {
    for (size_t i = 0; i < str.size(); ++i) {
        unsigned char c = static_cast<unsigned char>(str[i]);
        if (std::isprint(c) && c != ' ')
            return false;
    }
    return true;
}

template <typename Sequence>
std::ostream& operator<<(std::ostream &out, const PmergeMe<Sequence> &obj);

//redefino cosas
template <typename Sequence>
std::ostream& operator<<(std::ostream &out, const PmergeMe<Sequence> &obj) {
    typename Sequence::const_iterator it;
    for (it = obj.begin(); it != obj.end(); ++it) {
        out << *it << " ";
    }
    return out;
}

template <typename Sequence>
typename Sequence::iterator PmergeMe<Sequence>::begin() {
    return data_.begin();
}

template <typename Sequence>
typename Sequence::iterator PmergeMe<Sequence>::end() {
    return data_.end();
}

template <typename Sequence>
typename Sequence::const_iterator PmergeMe<Sequence>::begin() const {
    return data_.begin();
}

template <typename Sequence>
typename Sequence::const_iterator PmergeMe<Sequence>::end() const {
    return data_.end();
}

template <typename Sequence>
PmergeMe<Sequence>::PmergeMe() {}

//lo meto
template <typename Sequence>
PmergeMe<Sequence>::PmergeMe(char **args) {
    std::string combined;
    for (int i = 1; args[i]; i++) {
        std::string argStr(args[i]);
        if (isNonDisplayable<Sequence>(argStr))
            throw std::invalid_argument("Invalid argument: non-displayable characters found");
        combined += args[i];
        if (args[i + 1]) combined += " ";
    }
    std::istringstream ss(combined);
    Value num;
    while (ss >> num) {
        if (std::find(data_.begin(), data_.end(), num) != data_.end())
            throw std::runtime_error("Duplicate number");
        data_.push_back(num);
    }
    if (data_.size() != validateAndCount(combined))
        throw "Input error";
}

template <typename Sequence>
size_t PmergeMe<Sequence>::validateAndCount(std::string &str) {
    int count = 0;
    for (size_t i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            count++;
            while (str[i] != ' ' && str[i] != '\0') {
                if (!std::isdigit(str[i]) && str[i] != '+')
                    throw "Invalid character";
                i++;
            }
        }
    }
    return count;
}

//la secuencia rara
template <typename Sequence>
int PmergeMe<Sequence>::jacobsthal(int k) {
    return static_cast<int>(round((pow(2, k) + pow(-1, k)) / 3));
}

//inserta por jacobsthal
template <typename Sequence>
void PmergeMe<Sequence>::insertInto(Sequence &mainSeq, Sequence &pending, Value last, Sequence &tail, Sequence &base, bool hasOdd, int groupSize) {
    Iter pos;
    if (pending.size() == 1) {
        pos = std::upper_bound(mainSeq.begin(), mainSeq.end(), *pending.begin());
        mainSeq.insert(pos, *pending.begin());
    } else if (pending.size() > 1) {
        size_t j = 3, used = 0, take, back;
        while (!pending.empty()) {
            take = jacobsthal(j) - jacobsthal(j - 1);
            if (take > pending.size()) take = pending.size();
            back = 0;
            while (take--) {
                pos = mainSeq.begin();
                //limite
                if (jacobsthal(j + used) - back <= mainSeq.size())
                    pos = mainSeq.begin() + jacobsthal(j + used) - back;
                else
                    pos = mainSeq.end();
                pos = std::upper_bound(mainSeq.begin(), pos, *(pending.begin() + take));
                mainSeq.insert(pos, *(pending.begin() + take));
                pending.erase(pending.begin() + take);
                back++;
                used++;
            }
            j++;
        }
    }
    Sequence tempResult;
    if (hasOdd) {
        pos = std::upper_bound(mainSeq.begin(), mainSeq.end(), last);
        mainSeq.insert(pos, last);
    }
    for (Iter i = mainSeq.begin(); i != mainSeq.end(); i++) {
        Iter found = std::find(base.begin(), base.end(), *i);
        tempResult.insert(tempResult.end(), found - (groupSize - 1), found + 1);
    }
    tempResult.insert(tempResult.end(), tail.begin(), tail.end());
    base = tempResult;
}

template <typename Sequence>
void PmergeMe<Sequence>::runSort() {
    recursiveSort(data_);
}

//merge-insert sort
template <typename Sequence>
void PmergeMe<Sequence>::recursiveSort(Sequence &seq) {
    static int group = 1;
    if (group == 1)
        t_start_ = clock();
    int setSize = seq.size() / group;
    if (setSize < 2) return;

    bool hasOdd = setSize % 2;
    Iter first = seq.begin();
    Iter lastIt = seq.begin() + ((group * setSize) - (hasOdd * group));

    for (Iter it = first; it < lastIt; it += (group * 2)) {
        if (*(it + (group - 1)) > *(it + ((group * 2) - 1))) {
            for (int i = 0; i < group; i++)
                std::swap(*(it + i), *(it + i + group));
        }
    }

    group *= 2;
    recursiveSort(seq);
    group /= 2;

    Sequence mainSeq;
    Sequence pending;
    Sequence left;
    Value lastVal = 0;

    mainSeq.push_back(*(first + group - 1));
    mainSeq.push_back(*(first + group * 2 - 1));

    for (Iter it = first + group * 2; it < lastIt; it += group) {
        pending.push_back(*(it + group - 1));
        it += group;
        mainSeq.push_back(*(it + group - 1));
    }

    if (hasOdd)
        lastVal = *(lastIt + group - 1);

    left.insert(left.end(), lastIt + (group * hasOdd), seq.end());

    if (hasOdd || !pending.empty())
        insertInto(mainSeq, pending, lastVal, left, seq, hasOdd, group);

    if (group == 1)
        t_end_ = clock();
}

template <typename Sequence>
void PmergeMe<Sequence>::showTime() {
    float elapsed = calcTime();
    std::cout << data_.size() << " in " << detectContainer() << ": " << std::fixed << std::setprecision(6) << elapsed << "s" << std::endl;
}

template <typename Sequence>
float PmergeMe<Sequence>::calcTime() {
    return static_cast<float>(t_end_ - t_start_) / CLOCKS_PER_SEC;
}

template <typename Sequence>
std::string PmergeMe<Sequence>::detectContainer() {
    if (typeid(data_) == typeid(std::vector<typename Sequence::value_type>))
        return "vector";
    if (typeid(data_) == typeid(std::deque<typename Sequence::value_type>))
        return "deque";
    if (typeid(data_) == typeid(std::list<typename Sequence::value_type>))
        return "list";
    return "unknown";
}

#endif
