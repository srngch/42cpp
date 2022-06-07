/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 17:59:15 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/06 00:39:28 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "AMateria.hpp"
#include "Character.hpp"

Character::Character(): name("") {
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		this->inventory[i] = NULL;
	}
}

Character::Character(std::string name): name(name) {
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		this->inventory[i] = NULL;
	}
}

Character::Character(Character const & src) {
	if (this != &src) {
		*this = src;
	}
}

Character & Character::operator=(Character const & rhs) {
	if (this != &rhs) {
		this->name = rhs.getName();
		for (int i = 0; i < INVENTORY_SIZE; i++) {
			if (this->inventory[i] != NULL)
				delete this->inventory[i];
			if (rhs.inventory[i] != NULL)
				this->inventory[i] = rhs.inventory[i]->clone();
			else
				this->inventory[i] = NULL;
		}
	}
	return *this;
}

Character::~Character(void) {
	std::cout << "Destructor called: " << this->getName() << std::endl;
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		if (this->inventory[i] != NULL) {
			delete this->inventory[i];
		}
	}
}

std::string const & Character::getName() const {
	return this->name;
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		if (this->inventory[i] == NULL) {
			this->inventory[i] = m;
			return;
		}
	}
	std::cout << "Inventory is full" << std::endl;
}

void Character::unequip(int idx) {
	if (0 <= idx && idx < INVENTORY_SIZE) {
		this->inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (0 <= idx && idx < INVENTORY_SIZE) {
		if (this->inventory[idx] != NULL) {
			this->inventory[idx]->use(target);
		}
	}
}

void Character::showInventory() const {
	std::cout << "## Inventory of " << this->name << " ##" << std::endl;
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		std::cout << std::setw(MAX_FIELD_LEN) << i << "|";
	}
	std::cout << std::endl;;
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		if (this->inventory[i] != NULL) {
			std::cout << std::setw(MAX_FIELD_LEN) << this->inventory[i]->getType() << "|";
		} else {
			std::cout << std::setw(MAX_FIELD_LEN) << "(empty)" << "|";
		}
	}
	std::cout << std::endl;
}
