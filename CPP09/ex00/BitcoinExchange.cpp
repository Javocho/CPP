#include "BitcoinExchange.hpp"
#include <cstdlib>  // Para strtod

// Whitespace characters to remove (space, tab, newline, carriage return)
const char* WHITESPACE = " \t\n\r";

// Trim whitespace characters from the beginning of a string
static std::string& ltrim(std::string& s)
{
    s.erase(0, s.find_first_not_of(WHITESPACE));
    return s;
}

// Trim whitespace characters from the end of a string
static std::string& rtrim(std::string& s)
{
    s.erase(s.find_last_not_of(WHITESPACE) + 1);
    return s;
}

// Trim whitespace characters from both ends of a string
static std::string& trim(std::string& s)
{
    return ltrim(rtrim(s));
}

Btc::Btc()
{
	int i = 0;
	this->readFlag = 1;
	std::ifstream file("./data.csv");
	if (!file.is_open())
	{
		this->readFlag = 0;
		return;
	}
	std::string line;
	while(std::getline(file, line))
	{
		if (i == 0)
		{
			i = 1;
			continue;
		}
		size_t pos = line.find(',');
		if (pos == std::string::npos)
		{
			std::cerr << "Error : Invalid Paramter" << std::endl;
			continue;
		}
		std::string date = line.substr(0, pos);
        std::string valStr = line.substr(pos + 1);
        const char* val_str = valStr.c_str();
        char* end;
        double value = std::strtod(val_str, &end);
        if (*end != '\0')
        {
            std::cerr << "Error: could not parse value" << std::endl;
            continue;
        }
		this->setData(date, (float)value);
	}
	file.close();
}

Btc::~Btc()
{
}

Btc &Btc::operator=(Btc const &var)
{
	this->data = var.data;
	return (*this);
}

Btc::Btc(Btc const &var)
{
	*this = var;
}

void Btc::setData(std::string date, float value)
{
	this->data.insert(std::make_pair(date, value));
}

std::map<std::string, float> Btc::getData()
{
	return (this->data);
}

std::vector<std::string> Btc::splitString(std::string str, char delimiter)
{
	std::vector<std::string> substrings;
	std::string substring = "";
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] != delimiter)
		{
			substring += str[i];
		}
		else
		{
			substrings.push_back(substring);
			while (str[i] == delimiter)
				i++;
			i--;
			substring = "";
		}
	}
	substrings.push_back(substring);
	return substrings;
}

void Btc::readInput(std::string inputPath)
{
	int i = 0;
	std::ifstream file2(inputPath.c_str());
	if (!file2.is_open())
	{
		this->readFlag = -1;
		return;
	}
	std::string line;
	std::vector<std::string> vectorLine;
	while(std::getline(file2, line))
	{
		if (i == 0)
		{
			i = 1;
			continue;
		}
		vectorLine = this->splitString(line, '|');
		if (vectorLine.size() < 2 || vectorLine[1].length() == 0)
		{
			std::cout << "Error: bad input => " << vectorLine[0] << std::endl;
			continue;
		}
		std::string date = trim(vectorLine[0]);
		std::map<std::string, float>::iterator it = this->data.upper_bound(date);

		// Manejo explícito del caso en que no hay ninguna fecha anterior
		if (it != this->data.begin() && it->first != date) --it;
		const char* val_str = vectorLine[1].c_str();
		char* end;
		double inputValue = std::strtod(val_str, &end);
		if (*end != '\0')
		{
			std::cout << "Error : Input Not A Number" << std::endl;
			continue;
		}
		if (inputValue > 1000)
		{
			std::cout << "Error: too large a number." << std::endl;
		}
		else if (inputValue < 0)
		{
			std::cout << "Error: not a positive number." << std::endl;
		}
		else
		{
			std::cout << date << " => " << inputValue << " = " << inputValue * it->second << std::endl;
		}
	}
	file2.close();
}
