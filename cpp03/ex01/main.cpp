/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 21:57:20 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/02 02:02:02 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

int main(void) {
	ScavTrap scav("scav");

	scav.showStatus();
	for (int i = 0; i < 50; i++) {
		scav.attack("Target A");
	}
	scav.showStatus();

	ScavTrap scav2("scav2");

	scav2.showStatus();
	scav2.takeDamage(50);
	scav2.takeDamage(50);
	scav2.beRepaired(50);
	scav2.showStatus();

	ScavTrap scav3("scav3");

	scav3.showStatus();
	scav3.guardGate();

	return 0;
}
