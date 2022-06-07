/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:48:30 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/05 02:25:36 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

Animal::Animal(): type("Animal") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const & src) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal & Animal::operator=(Animal const & rhs) {
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &rhs) {
		this->setType(rhs.getType());
	}
	return *this;
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const {
	return this->type;
}

void Animal::setType(std::string type) {
	this->type = type;
}
