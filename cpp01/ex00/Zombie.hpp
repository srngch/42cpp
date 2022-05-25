/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 00:33:43 by sarchoi           #+#    #+#             */
/*   Updated: 2022/05/26 00:56:12 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <string>

class Zombie {
private:
	std::string	name;
public:
	Zombie();
	Zombie(std::string name);
	Zombie(Zombie const & src);
	~Zombie();
	Zombie & operator=(Zombie const & rhs);

	void announce(void);
	void setName(std::string name);

	static Zombie* newZombie(std::string name);
	static void randomChump(std::string name);
};

#endif /* __ZOMBIE_H__ */
