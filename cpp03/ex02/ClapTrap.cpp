/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 01:36:25 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/02 02:38:41 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->hit_points = CLAPTRAP_MAX_HIT_POINTS;
	this->energy_points = CLAPTRAP_MAX_ENERGY_POINTS;
	this->attack_damage = CLAPTRAP_MAX_ATTACK_DAMAGE;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "ClapTrap " << name << " constructed!" << std::endl;
	this->name = name;
	this->hit_points = CLAPTRAP_MAX_HIT_POINTS;
	this->energy_points = CLAPTRAP_MAX_ENERGY_POINTS;
	this->attack_damage = CLAPTRAP_MAX_ATTACK_DAMAGE;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	std::cout << "ClapTrap " << src.name << " copied!" << std::endl;
	*this = src;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs) {
	std::cout << "ClapTrap " << rhs.name << " assigned!" << std::endl;
	if (this != &rhs) {
		this->name = rhs.name;
		this->hit_points = rhs.hit_points;
		this->energy_points = rhs.energy_points;
		this->attack_damage = rhs.attack_damage;
	}
	return *this;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap " << this->name << " destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string & target) {
	if (this->hit_points <= 0 || this->energy_points <=0) {
		std::cout << "ClapTrap " << this->name << " can't attack..." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	this->energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->name << " takes damage, losing " << amount << " points!" << std::endl;
	this->hit_points -= amount;
	if (this->hit_points < 0) {
		this->hit_points = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->hit_points <= 0 || this->energy_points <= 0) {
		std::cout << "ClapTrap " << this->name << " can't be repaired..." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " is repaired " << amount << " points" << std::endl;
	this->hit_points += amount;
	if (this->hit_points > CLAPTRAP_MAX_HIT_POINTS)
		this->hit_points = CLAPTRAP_MAX_HIT_POINTS;
	this->energy_points--;
}

void ClapTrap::showStatus() {
	std::cout << "ClapTrap " << this->name << " status: " << std::endl;
	std::cout << "\t- Hit points: " << this->hit_points << std::endl;
	std::cout << "\t- Energy points: " << this->energy_points << std::endl;
}
