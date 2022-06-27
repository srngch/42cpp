/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 21:57:20 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/02 01:28:54 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main(void) {
	ClapTrap clap("clap");

	clap.showStatus();

	for (int i = 0; i < 5; i++) {
		clap.attack("Target A");
	}
	clap.showStatus();

	clap.takeDamage(5);
	clap.showStatus();

	clap.beRepaired(3);
	clap.showStatus();

	clap.attack("Target 1");
	clap.attack("Target 2");
	clap.attack("Target 3");
	clap.attack("Target 4");
	clap.showStatus();

	clap.attack("Target 5");
	clap.showStatus();

	ClapTrap clap2("clap2");

	clap2.showStatus();
	clap2.takeDamage(10);
	clap2.showStatus();

	clap2.attack("Target 1");

	return 0;
}
