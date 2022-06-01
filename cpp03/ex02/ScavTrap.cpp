/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 01:36:21 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/02 02:06:12 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->hit_points = SCAVTRAP_MAX_HIT_POINTS;
	this->energy_points = SCAVTRAP_MAX_ENERGY_POINTS;
	this->attack_damage = 0;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap " << name << " constructed!" << std::endl;
	this->name = name;
	this->hit_points = SCAVTRAP_MAX_HIT_POINTS;
	this->energy_points = SCAVTRAP_MAX_ENERGY_POINTS;
	this->attack_damage = 0;
}

ScavTrap::ScavTrap(ScavTrap const & src){
	std::cout << "ScavTrap " << src.name << " copied!" << std::endl;
	*this = src;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs) {
	std::cout << "ScavTrap " << rhs.name << " assigned!" << std::endl;
	if (this != &rhs) {
		this->name = rhs.name;
		this->hit_points = rhs.hit_points;
		this->energy_points = rhs.energy_points;
		this->attack_damage = rhs.attack_damage;
	}
	return *this;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap " << this->name << " destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string & target) {
	if (this->hit_points <= 0 || this->energy_points <=0) {
		std::cout << "ScavTrap " << this->name << " can't attack..." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	this->energy_points--;
}

void ScavTrap::takeDamage(unsigned int amount) {
	std::cout << "ScavTrap " << this->name << " takes damage, losing " << amount << " points!" << std::endl;
	this->hit_points -= amount;
	if (this->hit_points < 0) {
		this->hit_points = 0;
	}
}

void ScavTrap::beRepaired(unsigned int amount) {
	if (this->hit_points <= 0 || this->energy_points <= 0) {
		std::cout << "ScavTrap " << this->name << " can't be repaired..." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name << " is repaired " << amount << " points" << std::endl;
	this->hit_points += amount;
	if (this->hit_points > SCAVTRAP_MAX_HIT_POINTS)
		this->hit_points = SCAVTRAP_MAX_HIT_POINTS;
	this->energy_points--;
}

void ScavTrap::showStatus() {
	std::cout << "ScavTrap " << this->name << " status: " << std::endl;
	std::cout << "\t- Hit points: " << this->hit_points << std::endl;
	std::cout << "\t- Energy points: " << this->energy_points << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->name << " guards the gate!" << std::endl;
}
