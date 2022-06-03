/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 02:52:41 by sarchoi           #+#    #+#             */
/*   Updated: 2022/05/26 14:15:10 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {}

Weapon::~Weapon(void) {
	std::cout << type << " is destroyed!" << std::endl;
}

const std::string & Weapon::getType(void) const {
	return this->type;
}

void Weapon::setType(std::string type) {
	this->type = type;
}
