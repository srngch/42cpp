/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 01:22:30 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/19 01:22:31 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Usage: ./convert <Argument>" << std::endl;
		std::cout << "Argument can be: char, int, float, double" << std::endl;
		return (1);
	}

	type t = checkType(argv[1]);
	switch (t) {
		case CHAR:
		case INT:
		case FLOAT:
		case DOUBLE:
			convert(argv[1]);
			break;
		case PSEUDO_LITERAL:
			convert_pseudo_literal(argv[1]);
			break;
		default:
			std::cout << "Unknown scalar type" << std::endl;
			std::cout << "Argument can be: char, int, float, double" << std::endl;
			break;
	}
	return 0;
}
