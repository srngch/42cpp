/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 21:09:43 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/05 00:25:08 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const & src) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain & Brain::operator=(Brain const & rhs) {
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &rhs) {
		for (int i = 0; i < IDEAS_LENGTH; i++) {
			this->ideas[i] = rhs.ideas[i];
		}
	}
	return *this;
}

std::string Brain::getIdea(size_t index) const {
	return this->ideas[index];
}

void Brain::setIdea(size_t index, std::string idea) {
	this->ideas[index] = idea;
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
}
