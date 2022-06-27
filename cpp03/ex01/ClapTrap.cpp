/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 01:36:25 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/04 00:00:19 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name(""), hit_points(CLAPTRAP_MAX_HIT_POINTS), energy_points(CLAPTRAP_MAX_ENERGY_POINTS), attack_damage(CLAPTRAP_MAX_ATTACK_DAMAGE) {
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->setMaxHitPoints(CLAPTRAP_MAX_HIT_POINTS);
}

ClapTrap::ClapTrap(std::string name): name(name), hit_points(CLAPTRAP_MAX_HIT_POINTS), energy_points(CLAPTRAP_MAX_ENERGY_POINTS), attack_damage(CLAPTRAP_MAX_ATTACK_DAMAGE) {
	std::cout << "ClapTrap " << this->getName() << " constructed!" << std::endl;
	this->setMaxHitPoints(CLAPTRAP_MAX_HIT_POINTS);
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	std::cout << "ClapTrap " << src.getName() << " copied!" << std::endl;
	*this = src;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs) {
	std::cout << "ClapTrap " << rhs.getName() << " assigned!" << std::endl;
	if (this != &rhs) {
		this->setName(rhs.getName());
		this->setMaxHitPoints(rhs.getMaxHitPoints());
		this->setHitPoints(rhs.getHitPoints());
		this->setEnergyPoints(rhs.getEnergyPoints());
		this->setAttackDamage(rhs.getAttackDamage());
	}
	return *this;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap " << this->getName() << " destroyed!" << std::endl;
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
	if (this->getHitPoints() <= 0 || this->getEnergyPoints() <=0) {
		std::cout << "ClapTrap " << this->getName() << " can't attack..." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	this->setEnergyPoints(this->getEnergyPoints() - 1);
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << this->getName() << " takes damage, losing " << amount << " points!" << std::endl;
	this->setHitPoints(this->getHitPoints() - amount);
	if (this->getHitPoints() < 0) {
		this->setHitPoints(0);
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->getHitPoints() <= 0 || this->getEnergyPoints() <= 0) {
		std::cout << this->getName() << " can't be repaired..." << std::endl;
		return ;
	}
	std::cout << this->getName() << " is repaired " << amount << " points" << std::endl;
	this->setHitPoints(this->getHitPoints() + amount);
	if (this->getHitPoints() > this->getMaxHitPoints())
		this->setHitPoints(this->getMaxHitPoints());
	this->setEnergyPoints(this->getEnergyPoints() - 1);
}

void ClapTrap::showStatus() {
	std::cout << "<" << this->getName() << "'s status>: " << std::endl;
	std::cout << "\t- Hit points: " << this->getHitPoints() << std::endl;
	std::cout << "\t- Energy points: " << this->getEnergyPoints() << std::endl;
	std::cout << "\t- Attack damage: " << this->getAttackDamage() << std::endl;
}
