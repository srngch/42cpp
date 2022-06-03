/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 01:36:10 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/03 21:23:09 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__

#define SCAVTRAP_MAX_HIT_POINTS 100
#define SCAVTRAP_MAX_ENERGY_POINTS 50
#define SCAVTRAP_MAX_ATTACK_DAMAGE 20

#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	ScavTrap & operator=(ScavTrap const & rhs);
	~ScavTrap();

	void attack(const std::string & target);

	void guardGate();
};

#endif /* __SCAVTRAP_H__ */
