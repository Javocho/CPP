#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <vector>

class Btc
{
private:
	std::map<std::string, float> data;
	int readFlag;

public:
	Btc();
	Btc(const Btc &var);
	~Btc();

	Btc &operator=(const Btc &var);

	void setData(std::string date, float value);
	std::map<std::string, float> getData();
	std::vector<std::string> splitString(std::string str, char delimiter);
	void readInput(std::string inputPath);
};

#endif
