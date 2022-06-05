/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 17:59:05 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/05 19:31:00 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {}

Ice::Ice(Ice const & src): AMateria("ice") {
	*this = src;
}

Ice & Ice::operator=(Ice const & rhs) {
	if (this != &rhs) {
		this->type = rhs.getType();
	}
	return *this;
}

Ice::~Ice(void) {}

AMateria* Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
