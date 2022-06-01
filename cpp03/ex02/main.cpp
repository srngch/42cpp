/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 21:57:20 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/02 02:33:03 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

int main(void) {
	FragTrap frag("frag");

	frag.showStatus();
	for (int i = 0; i < 5; i++) {
		frag.attack("Target A");
	}
	frag.showStatus();

	FragTrap frag2("frag2");

	frag2.showStatus();
	frag2.takeDamage(50);
	frag2.takeDamage(50);
	frag2.beRepaired(50);
	frag2.showStatus();

	FragTrap frag3("frag3");

	frag3.showStatus();
	frag3.highFivesGuys();

	return 0;
}
