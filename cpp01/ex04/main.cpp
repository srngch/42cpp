/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:17:55 by sarchoi           #+#    #+#             */
/*   Updated: 2022/05/26 14:46:41 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void replace(std::string &str, const std::string &from, const std::string &to) {
	size_t start_pos = str.find(from);
	if (start_pos == std::string::npos)
		return;
	// replace every occurrence of from with to
	while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
		str.erase(start_pos, from.length());
		str.insert(start_pos, to);
		start_pos += to.length();
	}
}

bool run(std::string &filename, std::string &from, std::string &to) {

	std::ifstream ifs(filename);
	std::ofstream ofs(filename + ".replace");

	if (!ifs) {
		std::cout << "File " << filename << " does not exist" << std::endl;
		return (false);
	}

	std::string line;

	while (std::getline(ifs, line)) {
		if (line.find(from) != std::string::npos) {
			replace(line, from, to);
		}
		ofs << line << std::endl;
	}
	ifs.close();
	ofs.close();
	return (true);
}

int main(int argc, char **argv)
{
	std::string fileName;
	std::string s1;
	std::string s2;
	int result;

	if (argc != 4) {
		std::cout << "Usage: " << argv[0] << " <fileName> <string1> <string2>" << std::endl;
		return (1);
	}
	fileName = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	result = run(fileName, s1, s2);
	if (!result)
		return (1);
	return (0);
}
