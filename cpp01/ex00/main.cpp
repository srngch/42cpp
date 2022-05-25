/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 00:33:27 by sarchoi           #+#    #+#             */
/*   Updated: 2022/05/26 00:56:42 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie	zombie("zombie");
	zombie.announce();

	Zombie	noNamedZombie;
	noNamedZombie.announce();

	Zombie	copiedZombie(zombie);
	copiedZombie.setName("copiedZombie");
	copiedZombie.announce();

	Zombie	assignedZombie = zombie;
	assignedZombie.setName("assignedZombie");
	assignedZombie.announce();

	Zombie*	zombie2 = Zombie::newZombie("newbie");
	zombie2->announce();

	Zombie::randomChump("chumbie");

	delete zombie2;
	return 0;
}
