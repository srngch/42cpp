/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 02:15:45 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/02 02:27:01 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;
	this->hit_points = FRAGTRAP_MAX_HIT_POINTS;
	this->energy_points = FRAGTRAP_MAX_ENERGY_POINTS;
	this->attack_damage = FRAGTRAP_MAX_ATTACK_DAMAGE;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap " << name << " constructed!" << std::endl;
	this->name = name;
	this->hit_points = FRAGTRAP_MAX_HIT_POINTS;
	this->energy_points = FRAGTRAP_MAX_ENERGY_POINTS;
	this->attack_damage = FRAGTRAP_MAX_ATTACK_DAMAGE;
}

FragTrap::FragTrap(FragTrap const & src){
	std::cout << "FragTrap " << src.name << " copied!" << std::endl;
	*this = src;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs) {
	std::cout << "FragTrap " << rhs.name << " assigned!" << std::endl;
	if (this != &rhs) {
		this->name = rhs.name;
		this->hit_points = rhs.hit_points;
		this->energy_points = rhs.energy_points;
		this->attack_damage = rhs.attack_damage;
	}
	return *this;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap " << this->name << " destroyed!" << std::endl;
}

void FragTrap::attack(const std::string & target) {
	if (this->hit_points <= 0 || this->energy_points <=0) {
		std::cout << "FragTrap " << this->name << " can't attack..." << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	this->energy_points--;
}

void FragTrap::takeDamage(unsigned int amount) {
	std::cout << "FragTrap " << this->name << " takes damage, losing " << amount << " points!" << std::endl;
	this->hit_points -= amount;
	if (this->hit_points < 0) {
		this->hit_points = 0;
	}
}

void FragTrap::beRepaired(unsigned int amount) {
	if (this->hit_points <= 0 || this->energy_points <= 0) {
		std::cout << "FragTrap " << this->name << " can't be repaired..." << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->name << " is repaired " << amount << " points" << std::endl;
	this->hit_points += amount;
	if (this->hit_points > FRAGTRAP_MAX_HIT_POINTS)
		this->hit_points = FRAGTRAP_MAX_HIT_POINTS;
	this->energy_points--;
}

void FragTrap::showStatus() {
	std::cout << "FragTrap " << this->name << " status: " << std::endl;
	std::cout << "\t- Hit points: " << this->hit_points << std::endl;
	std::cout << "\t- Energy points: " << this->energy_points << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->name << " high-fives guys!" << std::endl;
	this->energy_points--;
}
