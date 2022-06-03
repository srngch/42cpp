/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 01:36:21 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/03 23:55:43 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->setName("");
	this->setMaxHitPoints(SCAVTRAP_MAX_HIT_POINTS);
	this->setHitPoints(SCAVTRAP_MAX_HIT_POINTS);
	this->setEnergyPoints(SCAVTRAP_MAX_ENERGY_POINTS);
	this->setAttackDamage(SCAVTRAP_MAX_ATTACK_DAMAGE);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap " << name << " constructed!" << std::endl;
	this->setName(name);
	this->setMaxHitPoints(SCAVTRAP_MAX_HIT_POINTS);
	this->setHitPoints(SCAVTRAP_MAX_HIT_POINTS);
	this->setEnergyPoints(SCAVTRAP_MAX_ENERGY_POINTS);
	this->setAttackDamage(SCAVTRAP_MAX_ATTACK_DAMAGE);
}

ScavTrap::ScavTrap(ScavTrap const & src){
	std::cout << "ScavTrap " << src.getName() << " copied!" << std::endl;
	*this = src;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs) {
	std::cout << "ScavTrap " << rhs.getName() << " assigned!" << std::endl;
	if (this != &rhs) {
		this->setName(rhs.getName());
		this->setMaxHitPoints(rhs.getMaxHitPoints());
		this->setHitPoints(rhs.getHitPoints());
		this->setEnergyPoints(rhs.getEnergyPoints());
		this->setMaxEnergyPoints(rhs.getMaxEnergyPoints());
	}
	return *this;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap " << this->getName() << " destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string & target) {
	if (this->getHitPoints() <= 0 || this->getEnergyPoints() <=0) {
		std::cout << "ScavTrap " << this->getName() << " can't attack..." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	this->setEnergyPoints(this->getEnergyPoints() - 1);
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->getName() << " guards the gate!" << std::endl;
}
