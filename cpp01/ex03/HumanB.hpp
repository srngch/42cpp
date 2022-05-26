/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 02:28:32 by sarchoi           #+#    #+#             */
/*   Updated: 2022/05/26 14:14:03 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMAN_B_H__
#define __HUMAN_B_H__

#include <string>
#include "Weapon.hpp"

class HumanB {
private:
	std::string	name;
	Weapon *weapon;

public:
	HumanB(std::string name);
	~HumanB();

	void attack();
	void setWeapon(Weapon *weapon);
};

#endif /* __HUMAN_B_H__ */
