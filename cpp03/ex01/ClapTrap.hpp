/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 01:36:08 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/02 01:53:41 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__

#define MAX_HIT_POINTS 10
#define MAX_ENERGY_POINTS 10

#include <string>

class ClapTrap {
protected:
	std::string name;
	int hit_points; // health
	int energy_points; // energy
	int attack_damage; // power

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & src);
	ClapTrap & operator=(ClapTrap const & rhs);
	~ClapTrap();

	void attack(const std::string & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void showStatus();
};

#endif /* __CLAPTRAP_H__ */
