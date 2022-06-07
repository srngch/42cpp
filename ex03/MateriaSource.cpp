/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 17:59:22 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/05 20:42:19 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "AMateria.hpp"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < MATERIAS_SIZE; i++) {
		this->materias[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const & src) {
	*this = src;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs) {
	return *this;
}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < MATERIAS_SIZE; i++) {
		if (this->materias[i] != NULL) {
			delete this->materias[i];
		}
	}
}

void MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < MATERIAS_SIZE; i++) {
		if (this->materias[i] == NULL) {
			this->materias[i] = m;
			return;
		}
	}
	std::cout << "Materias is full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < MATERIAS_SIZE; i++) {
		if (this->materias[i] != NULL && this->materias[i]->getType() == type) {
			return this->materias[i]->clone();
		}
	}
	return NULL;
}

void MateriaSource::showMaterias() const {
	std::cout << "## Materias ##" << std::endl;
	for (int i = 0; i < MATERIAS_SIZE; i++) {
		std::cout << std::setw(MAX_FIELD_LEN) << i << "|";
	}
	std::cout << std::endl;;
	for (int i = 0; i < MATERIAS_SIZE; i++) {
		if (this->materias[i] != NULL) {
			std::cout << std::setw(MAX_FIELD_LEN) << this->materias[i]->getType() << "|";
		} else {
			std::cout << std::setw(MAX_FIELD_LEN) << "(empty)" << "|";
		}
	}
	std::cout << std::endl;
}
