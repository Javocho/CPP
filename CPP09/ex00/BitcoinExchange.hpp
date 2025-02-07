/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:24:02 by javocho           #+#    #+#             */
/*   Updated: 2025/02/07 18:26:42 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
#include <stdexcept>

class BitcoinExchange {
private:
    std::map<std::string, double> _exchangeRates;

public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &other);
    BitcoinExchange &operator=(const BitcoinExchange &other);
    ~BitcoinExchange();

    void loadDatabase(const std::string &filename);
    double getExchangeRate(const std::string &date) const;
    void processInputFile(const std::string &filename) const;

    class FileException : public std::exception {
    public:
        const char *what() const throw();
    };

    class InvalidDataException : public std::exception {
    public:
        const char *what() const throw();
    };
};

#endif
