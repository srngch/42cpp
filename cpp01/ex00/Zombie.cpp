/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 00:33:40 by sarchoi           #+#    #+#             */
/*   Updated: 2022/05/26 00:56:24 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie() {
	this->name = "No name";
}

Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::Zombie(Zombie const & src) {
	*this = src;
}

Zombie::~Zombie(void) {
	std::cout << name << " is destroyed!" << std::endl;
}

Zombie & Zombie::operator=(Zombie const & rhs) {
	this->name = rhs.name;
	return *this;
}

void Zombie::setName(std::string name) {
	this->name = name;
}

void Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
