/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 21:29:35 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/03 23:56:40 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__

#define CLAPTRAP_MAX_HIT_POINTS 10
#define CLAPTRAP_MAX_ENERGY_POINTS 10
#define CLAPTRAP_MAX_ATTACK_DAMAGE 0

#include <string>

class ClapTrap {
protected:
	std::string name;
	int max_hit_points; // health
	int hit_points; // health
	int energy_points; // energy
	int attack_damage; // power

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & src);
	ClapTrap & operator=(ClapTrap const & rhs);
	~ClapTrap();

	std::string getName() const;
	int getMaxHitPoints() const;
	int getHitPoints() const;
	int getEnergyPoints() const;
	int getAttackDamage() const;

	void setName(std::string name);
	void setMaxHitPoints(int max_hit_points);
	void setHitPoints(int hit_points);
	void setEnergyPoints(int energy_points);
	void setAttackDamage(int attack_damage);

	void attack(const std::string & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void showStatus();
};

#endif /* __CLAPTRAP_H__ */
