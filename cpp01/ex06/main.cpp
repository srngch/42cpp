/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:12:32 by sarchoi           #+#    #+#             */
/*   Updated: 2022/05/26 16:49:27 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(int argc, char **argv) {
	Harl harl;

	if (argc != 2) {
		std::cout << "Usage: ./Harl <level>" << std::endl;
		std::cout << "Levels: DEBUG, INFO, WARNING, ERROR" << std::endl;
		return 1;
	}
	harl.complain(argv[1]);
	return 0;
}
