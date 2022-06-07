/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:55:26 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/05 00:39:34 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(): Animal() {
	std::cout << "Dog constructor called" << std::endl;
	this->setType("Dog");
	this->brain = new Brain();
}

Dog::Dog(Dog const & src): Animal(src) {
	std::cout << "Dog copy constructor called" << std::endl;
	this->setType(src.getType());
	this->brain = new Brain(*(src.getBrain()));
}

Dog & Dog::operator=(Dog const & rhs) {
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &rhs) {
		this->setType(rhs.getType());
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*(rhs.getBrain()));
	}
	return *this;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

Brain* Dog::getBrain() const {
	return this->brain;
}

void Dog::makeSound() const {
	std::cout << "Bark!" << std::endl;
}
