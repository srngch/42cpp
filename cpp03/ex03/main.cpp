/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 21:57:20 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/03 23:22:56 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main(void) {
	DiamondTrap dia("dia");

	std::cout << "name: " << dia.getName() << std::endl;
	dia.showStatus();
	dia.whoAmI();
	for (int i = 0; i < 5; i++) {
		dia.attack("Target A");
	}
	dia.showStatus();

	DiamondTrap dia2;

	dia2 = dia;
	dia2.setName("dia2");
	dia2.showStatus();
	dia2.whoAmI();

	DiamondTrap dia3(dia);

	dia3.showStatus();
	dia3.whoAmI();
	dia3.highFivesGuys();
	dia3.guardGate();

	return 0;
}
