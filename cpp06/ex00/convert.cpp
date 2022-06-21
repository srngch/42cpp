/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 01:22:40 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/21 19:23:57 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

#define PRECISION_LENGTH 1

void convert_pseudo_literal(std::string const &str) {
	if (str.compare("inff") == 0 || str.compare("inf") == 0) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
		return;
	}
	if (str.compare("+inff") == 0 || str.compare("+inf") == 0) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
		return;
	}
	if (str.compare("nanf") == 0 || str.compare("nan") == 0) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return;
	}
}

void convert_char(char const &c) {
	double d = static_cast<double>(c);
	double under_point = std::fmod(d, 1.0);

	if (under_point == 0.0) {
		std::cout.setf(std::ios::showpoint);
		std::cout.precision(PRECISION_LENGTH);
	}

	if (c < CHAR_MIN || CHAR_MAX < c)
		std::cout << "char: overflow" << std::endl;
	else if (!std::isprint(d))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(d) << std::endl;

	if (d < INT_MIN || INT_MAX < d)
		std::cout << "int: overflow" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;

	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

void convert(std::string const &str) {
	double d = std::stod(str);
	double under_point = std::fmod(d, 1.0);

	std::cout << std::fixed;
	if (under_point == 0.0) {
		std::cout.precision(PRECISION_LENGTH);
	}

	if (d < CHAR_MIN || CHAR_MAX < d)
		std::cout << "char: overflow" << std::endl;
	else if (!std::isprint(d))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(d) << std::endl;

	if (d < INT_MIN || INT_MAX < d)
		std::cout << "int: overflow" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;

	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}
