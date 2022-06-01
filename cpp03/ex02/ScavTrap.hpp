/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 01:36:10 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/02 01:58:13 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__

#define SCAVTRAP_MAX_HIT_POINTS 100
#define SCAVTRAP_MAX_ENERGY_POINTS 50

#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	ScavTrap & operator=(ScavTrap const & rhs);
	~ScavTrap();

	void attack(const std::string & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void showStatus();

	void guardGate();
};

#endif /* __SCAVTRAP_H__ */
