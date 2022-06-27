/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 01:22:45 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/21 19:39:56 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

bool is_pseudo_literal(std::string const &str) {
	if (str == "inff" || str == "+inff" || str == "nanf")
		return (true);
	if (str == "inf" || str == "+inf" || str == "nan")
		return (true);
	return (false);
}

bool is_char(std::string const &str) {
	bool is_valid_length = str.length() == 1;
	bool is_in_range = std::numeric_limits<char>::min() <= str.at(0) && str.at(0) <= std::numeric_limits<char>::max();
	bool is_printable = std::isalpha(str.at(0));
	return (is_valid_length && is_in_range && is_printable);
}

bool is_int(std::string const &str) {
	try {
		int i = std::stoi(str);
		bool has_valid_char = str.find_first_not_of("0123456789+-") == std::string::npos;
		bool is_in_range = std::numeric_limits<int>::min() <= i && i <= std::numeric_limits<int>::max();
		return (has_valid_char && is_in_range);
	} catch (std::exception &e) {
		return (false);
	}
}

bool is_float(std::string const &str)
{
	try {
		float f = std::stof(str);
		bool has_valid_char = str.find_first_not_of("0123456789+-f.") == std::string::npos;
		bool has_one_dot = str.find_first_of(".") == str.find_last_of(".");
		bool is_in_range = std::numeric_limits<float>::min() <= f && f <= std::numeric_limits<float>::max();
		return (has_valid_char && has_one_dot && is_in_range);
	} catch (std::exception &e) {
		return (false);
	}
}

bool is_double(std::string const &str)
{
	try {
		double d = std::stod(str);
		bool has_valid_char = str.find_first_not_of("0123456789+-f.") == std::string::npos;
		bool has_one_dot = str.find_first_of(".") == str.find_last_of(".");
		bool is_in_range = (std::numeric_limits<double>::min() <= d && d <= std::numeric_limits<double>::max()) || d == 0;
		return (has_valid_char && has_one_dot && is_in_range);
	} catch (std::exception &e) {
		return (false);
	}
}

type checkType(std::string const &str) {
	if (is_pseudo_literal(str))
		return (PSEUDO_LITERAL);
	if (is_char(str))
		return (CHAR);
	if (is_int(str))
		return (INT);
	if (is_float(str))
		return (FLOAT);
	if (is_double(str))
		return (DOUBLE);
	return (UNKNOWN);
}
