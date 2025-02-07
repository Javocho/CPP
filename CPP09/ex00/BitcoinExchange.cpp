/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:28:20 by javocho           #+#    #+#             */
/*   Updated: 2025/02/07 18:53:57 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) {
    *this = other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other) {
    if (this != &other)
        this->_exchangeRates = other._exchangeRates;
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}

double BitcoinExchange::getExchangeRate(const std::string &date) const {
    std::map<std::string, double>::const_iterator it = _exchangeRates.lower_bound(date);

    if (it == _exchangeRates.begin() && it->first != date)
        throw InvalidDataException();

    if (it == _exchangeRates.end() || it->first != date)
        --it;

    return it->second;
}

void BitcoinExchange::loadDatabase(const std::string &filename) {
    std::ifstream file(filename.c_str()); 

    if (!file)
        throw FileException();

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream ss(line);
        std::string date;
        double rate;

        if (std::getline(ss, date, ',') && (ss >> rate))
            _exchangeRates[date] = rate;
    }
    file.close();
}

void BitcoinExchange::processInputFile(const std::string &filename) const {
    std::ifstream file(filename.c_str()); 

    if (!file)
        throw FileException();

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream ss(line);
        std::string date;
        double value;

        if (!(std::getline(ss, date, '|') && (ss >> value))) {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }

        if (value < 0) {
            std::cerr << "Error: not a positive number." << std::endl;
            continue;
        }
        if (value > 1000) {
            std::cerr << "Error: too large a number." << std::endl;
            continue;
        }

        try {
            double exchangeRate = getExchangeRate(date);
            std::cout << date << " => " << value << " = " << (value * exchangeRate) << std::endl;
        } catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    }
    file.close();
}


const char *BitcoinExchange::FileException::what() const throw() {
    return "Error: could not open file.";
}

const char *BitcoinExchange::InvalidDataException::what() const throw() {
    return "Error: bad input format.";
}
