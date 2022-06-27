/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 01:22:30 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/21 19:13:56 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Usage: ./convert <Argument>" << std::endl;
		std::cout << "Argument can be: char, int, float, double" << std::endl;
		return (1);
	}

	std::string str = argv[1];
	type t = checkType(str);
	switch (t) {
		case CHAR:
			convert_char(str.at(0));
			break;
		case INT:
		case FLOAT:
		case DOUBLE:
			convert(str);
			break;
		case PSEUDO_LITERAL:
			convert_pseudo_literal(str);
			break;
		default:
			std::cout << "Unknown scalar type" << std::endl;
			std::cout << "Argument can be: char, int, float, double" << std::endl;
			break;
	}
	return 0;
}
