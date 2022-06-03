/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 02:27:11 by sarchoi           #+#    #+#             */
/*   Updated: 2022/05/26 14:14:31 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMAN_A_H__
#define __HUMAN_A_H__

#include <string>
#include "Weapon.hpp"

class HumanA {
private:
	std::string	name;
	Weapon &weapon;

public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	void attack();
};

#endif /* __HUMAN_A_H__ */
