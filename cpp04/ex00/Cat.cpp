/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:55:27 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/04 20:52:27 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat(): Animal() {
	std::cout << "Cat constructor called" << std::endl;
	this->setType("Cat");
}

Cat::Cat(Cat const & src) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat & Cat::operator=(Cat const & rhs) {
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &rhs) {
		this->setType(rhs.getType());
	}
	return *this;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}
