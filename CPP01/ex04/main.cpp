/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:59:14 by fcosta-f          #+#    #+#             */
/*   Updated: 2024/08/16 23:45:54 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>
// #include <sstream>

void replaceString(std::ofstream &output, std::string s1, std::string s2, std::string input) {
	size_t find;
	size_t t;
	 
	find = input.find(s1);
	if (find == std::string::npos) {
		output << input;
	}
	else {
		output << input.substr(0, find);
		output << s2;
		t = find + s1.length();
		replaceString(output, s1, s2, input.substr(t));
	}
	
}

int main(int argc, char **argv) {
	if (argc != 4) return 1;
	std::ifstream in;
	std::ofstream out;
	std::string s1;
	std::string s2;
	std::string buff;
	std::string original;
	std::string replace;

	s1 = argv[2];
	s2 = argv[3];
	original = argv[1];
	in.open(original.c_str());
	if (not in.good()) std::cerr << "Error : input file" << std::endl;

	replace = original + ".replace";
	out.open(replace.c_str());
	if (not out.good()) {
		in.close();
		std::cerr << "Error : output file" << std::endl;
	}

	while (getline(in, buff)) replaceString(out, s1, s2, buff + '\n');
	in.close();
	out.close();
}