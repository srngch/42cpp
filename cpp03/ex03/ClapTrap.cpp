/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 01:36:25 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/03 23:01:44 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name(""), hit_points(CLAPTRAP_MAX_HIT_POINTS), energy_points(CLAPTRAP_MAX_ENERGY_POINTS), attack_damage(CLAPTRAP_MAX_ATTACK_DAMAGE) {
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->max_hit_points = CLAPTRAP_MAX_HIT_POINTS;
}

ClapTrap::ClapTrap(std::string name): name(name), hit_points(CLAPTRAP_MAX_HIT_POINTS), energy_points(CLAPTRAP_MAX_ENERGY_POINTS), attack_damage(CLAPTRAP_MAX_ATTACK_DAMAGE) {
	std::cout << "ClapTrap " << this->name << " constructed!" << std::endl;
	this->max_hit_points = CLAPTRAP_MAX_HIT_POINTS;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	std::cout << "ClapTrap " << src.name << " copied!" << std::endl;
	*this = src;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs) {
	std::cout << "ClapTrap " << rhs.name << " assigned!" << std::endl;
	if (this != &rhs) {
		this->name = rhs.getName();
		this->hit_points = rhs.getHitPoints();
		this->energy_points = rhs.getEnergyPoints();
		this->attack_damage = rhs.getAttackDamage();
	}
	return *this;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap " << this->name << " destroyed!" << std::endl;
}

std::string ClapTrap::getName() const {
	return this->name;
}

int ClapTrap::getMaxHitPoints() const {
	return this->max_hit_points;
}

int ClapTrap::getHitPoints() const {
	return this->hit_points;
}

int ClapTrap::getEnergyPoints() const {
	return this->energy_points;
}

int ClapTrap::getAttackDamage() const {
	return this->attack_damage;
}

void ClapTrap::setName(std::string name) {
	this->name = name;
}

void ClapTrap::setMaxHitPoints(int max_hit_points) {
	this->max_hit_points = max_hit_points;
}

void ClapTrap::setHitPoints(int hit_points) {
	this->hit_points = hit_points;
}

void ClapTrap::setEnergyPoints(int energy_points) {
	this->energy_points = energy_points;
}

void ClapTrap::setAttackDamage(int attack_damage) {
	this->attack_damage = attack_damage;
}

void ClapTrap::attack(const std::string & target) {
	if (this->hit_points <= 0 || this->energy_points <=0) {
		std::cout << "ClapTrap " << this->name << " can't attack..." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	this->energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << this->name << " takes damage, losing " << amount << " points!" << std::endl;
	this->hit_points -= amount;
	if (this->getHitPoints() < 0) {
		this->hit_points = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->getHitPoints() <= 0 || this->getEnergyPoints() <= 0) {
		std::cout << this->name << " can't be repaired..." << std::endl;
		return ;
	}
	std::cout << this->name << " is repaired " << amount << " points" << std::endl;
	this->hit_points += amount;
	if (this->getHitPoints() > this->getMaxHitPoints())
		this->hit_points = this->getMaxHitPoints();
	this->energy_points--;
}

void ClapTrap::showStatus() {
	std::cout << "<" << this->getName() << "'s status>: " << std::endl;
	std::cout << "\t- Hit points: " << this->getHitPoints() << std::endl;
	std::cout << "\t- Energy points: " << this->getEnergyPoints() << std::endl;
	std::cout << "\t- Attack damage: " << this->getAttackDamage() << std::endl;
}
