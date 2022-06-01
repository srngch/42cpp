/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 02:15:44 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/02 02:26:49 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__

#define FRAGTRAP_MAX_HIT_POINTS 100
#define FRAGTRAP_MAX_ENERGY_POINTS 100
#define FRAGTRAP_MAX_ATTACK_DAMAGE 30

#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	FragTrap & operator=(FragTrap const & rhs);
	~FragTrap();

	void attack(const std::string & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void showStatus();

	void highFivesGuys();
};

#endif /* __FRAGTRAP_H__ */
