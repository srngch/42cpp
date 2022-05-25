/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 00:41:51 by sarchoi           #+#    #+#             */
/*   Updated: 2022/05/26 01:20:27 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define N 5

int main(void) {
	Zombie* horde = Zombie::zombieHorde(N, "zombie");

	for (int i = 0; i < N; i++) {
		horde[i].announce();
	}
	delete [] horde;
	return 0;
}
