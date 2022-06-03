/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:13:18 by sarchoi           #+#    #+#             */
/*   Updated: 2022/05/26 16:43:39 by sarchoi          ###   ########seoul.kr  */
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

int Harl::levelKey(std::string level) {
	std::string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++) {
		if (level == levels[i])
			return i;
	}
	return -1;
}

void Harl::complain(std::string level) {
	void (Harl::*f[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	enum e_level { DEBUG, INFO, WARNING, ERROR };

	switch (levelKey(level)) {
		case DEBUG:
			(this->*f[0])();
		case INFO:
			(this->*f[1])();
		case WARNING:
			(this->*f[2])();
		case ERROR:
			(this->*f[3])();
			break;
		default:
			std::cout << "[ insignificant problems ]" << std::endl;
			break;
	}
}
