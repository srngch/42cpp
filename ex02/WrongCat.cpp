/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 18:19:18 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/04 20:29:41 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal() {
	std::cout << "WrongCat constructor called" << std::endl;
	this->setType("WrongCat");
}

WrongCat::WrongCat(WrongCat const & src) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs) {
	std::cout << "WrongCat assignment operator called" << std::endl;
	if (this != &rhs) {
		this->setType(rhs.getType());
	}
	return *this;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "Meow???" << std::endl;
}
