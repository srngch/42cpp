/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 17:59:08 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/05 19:31:12 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {}

Cure::Cure(Cure const & src): AMateria("cure") {
	*this = src;
}

Cure & Cure::operator=(Cure const & rhs) {
	if (this != &rhs) {
		this->type = rhs.getType();
	}
	return *this;
}

Cure::~Cure(void) {}

AMateria* Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
