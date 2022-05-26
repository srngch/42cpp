/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 02:26:59 by sarchoi           #+#    #+#             */
/*   Updated: 2022/05/26 14:15:31 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
	{
		Weapon club = Weapon("crude spiked club");
		HumanA anna("Anna", club);

		anna.attack();
		club.setType("some other type of club");
		anna.attack();
	}
	std::cout << "------" << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanB brianna("Brianna");

		brianna.setWeapon(&club);
		brianna.attack();
		club.setType("some other type of club");
		brianna.attack();
	}
	return 0;
}

