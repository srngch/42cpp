/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 02:27:04 by sarchoi           #+#    #+#             */
/*   Updated: 2022/05/26 14:15:17 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <string>

class Weapon {
private:
	std::string	type;

public:
	Weapon(std::string type);
	~Weapon();

	const std::string & getType(void) const;
	void setType(std::string type);
};

#endif /* __WEAPON_H__ */
