/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 02:15:45 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/04 00:02:48 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;
	this->setName("");
	this->setMaxHitPoints(FRAGTRAP_MAX_HIT_POINTS);
	this->setHitPoints(FRAGTRAP_MAX_HIT_POINTS);
	this->setEnergyPoints(FRAGTRAP_MAX_ENERGY_POINTS);
	this->setAttackDamage(FRAGTRAP_MAX_ATTACK_DAMAGE);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap " << name << " constructed!" << std::endl;
	this->setName(name);
	this->setMaxHitPoints(FRAGTRAP_MAX_HIT_POINTS);
	this->setHitPoints(FRAGTRAP_MAX_HIT_POINTS);
	this->setEnergyPoints(FRAGTRAP_MAX_ENERGY_POINTS);
	this->setAttackDamage(FRAGTRAP_MAX_ATTACK_DAMAGE);
}

FragTrap::FragTrap(FragTrap const & src){
	std::cout << "FragTrap " << src.getName() << " copied!" << std::endl;
	*this = src;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs) {
	std::cout << "FragTrap " << rhs.name << " assigned!" << std::endl;
	if (this != &rhs) {
		this->setName(rhs.getName());
		this->setMaxHitPoints(rhs.getMaxHitPoints());
		this->setHitPoints(rhs.getHitPoints());
		this->setEnergyPoints(rhs.getEnergyPoints());
		this->setAttackDamage(rhs.getAttackDamage());
	}
	return *this;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap " << this->getName() << " destroyed!" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->getName() << " high-fives guys!" << std::endl;
	this->setEnergyPoints(this->getEnergyPoints() - 1);
}
