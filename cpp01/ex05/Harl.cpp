/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:21:19 by sarchoi           #+#    #+#             */
/*   Updated: 2022/05/26 16:09:27 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

Harl::Harl(void) {}

Harl::~Harl(void) {}

void Harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
}

void Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl;
}

void Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
}

void Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
}

void Harl::complain(std::string level) {
	void (Harl::*f[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	std::string levels[4] = {
		"debug",
		"info",
		"warning",
		"error"
	};

	for (int i = 0; i < 4; i++) {
		if (level == levels[i]) {
			(this->*f[i])();
			return ;
		}
	}
	std::cout << "Harl: Unknown Level" << std::endl;
}
