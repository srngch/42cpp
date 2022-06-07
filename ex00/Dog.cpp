/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:55:26 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/04 20:43:55 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog(): Animal() {
	std::cout << "Dog constructor called" << std::endl;
	this->setType("Dog");
}

Dog::Dog(Dog const & src) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog & Dog::operator=(Dog const & rhs) {
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &rhs) {
		this->setType(rhs.getType());
	}
	return *this;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Bark!" << std::endl;
}
