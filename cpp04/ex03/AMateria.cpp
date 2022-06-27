/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 17:59:03 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/05 18:03:29 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria(): type("") {}

AMateria::AMateria(std::string const & type): type(type) {}

AMateria::AMateria(AMateria const & src) {
	*this = src;
}

AMateria & AMateria::operator=(AMateria const & rhs) {
	if (this != &rhs) {
		this->type = rhs.getType();
	}
	return *this;
}

AMateria::~AMateria(void) {}

std::string const & AMateria::getType() const {
	return this->type;
}

void AMateria::use(ICharacter& target) {
	std::cout << "* use " << this->type << " to " << target.getName() << std::endl;
}
