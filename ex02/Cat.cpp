/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:55:27 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/05 00:41:09 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(): Animal() {
	std::cout << "Cat constructor called" << std::endl;
	this->setType("Cat");
	this->brain = new Brain();
}

Cat::Cat(Cat const & src): Animal(src) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->setType(src.getType());
	this->brain = new Brain(*(src.getBrain()));
}

Cat & Cat::operator=(Cat const & rhs) {
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &rhs) {
		this->setType(rhs.getType());
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*(rhs.getBrain()));
	}
	return *this;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

Brain* Cat::getBrain() const {
	return this->brain;
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}
