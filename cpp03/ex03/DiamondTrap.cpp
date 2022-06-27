/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 02:45:59 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/03 23:19:45 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : name(""), ClapTrap("") {
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->setMaxHitPoints(FragTrap::getMaxHitPoints());
	this->setHitPoints(FragTrap::getHitPoints());
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::DiamondTrap(std::string name): name(name), FragTrap(name), ScavTrap(name), ClapTrap(name + "_clap_name") {
	std::cout << "DiamondTrap " << name << " constructed!" << std::endl;

	this->setName(name);
	this->ClapTrap::setName(name + "_clap_name");

	this->setMaxHitPoints(FRAGTRAP_MAX_HIT_POINTS);
	this->setHitPoints(FRAGTRAP_MAX_HIT_POINTS);
	this->setEnergyPoints(SCAVTRAP_MAX_ENERGY_POINTS);
	this->setAttackDamage(FRAGTRAP_MAX_ATTACK_DAMAGE);
}

DiamondTrap::DiamondTrap(DiamondTrap const & src){
	std::cout << "DiamondTrap " << this->getName() << " copied!" << std::endl;
	*this = src;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs) {
	std::cout << "DiamondTrap " << rhs.getName() << " assigned!" << std::endl;
	if (this != &rhs) {
		this->setName(rhs.getName());
		this->setMaxHitPoints(rhs.getMaxHitPoints());
		this->setHitPoints(rhs.getHitPoints());
		this->setEnergyPoints(rhs.getEnergyPoints());
		this->setAttackDamage(rhs.getAttackDamage());
		ClapTrap::operator=(rhs);
	}
	return *this;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap " << this->getName() << " destroyed!" << std::endl;
}

std::string DiamondTrap::getName() const {
	return this->name;
}

void DiamondTrap::setName(std::string name) {
	this->name = name;
}

void DiamondTrap::attack(const std::string & target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "I am a " << this->getName() << " and also " << ClapTrap::getName() << std::endl;
}

void DiamondTrap::showStatus() {
	std::cout << "<" << this->getName() << "'s status>: " << std::endl;
	ClapTrap::showStatus();
}
