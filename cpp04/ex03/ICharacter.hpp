/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 17:58:50 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/05 20:36:28 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICHARACTER_H__
#define __ICHARACTER_H__

#include <string>
// #include "AMateria.hpp"

class AMateria;

class ICharacter {
public:
	virtual ~ICharacter() {};

	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;

	virtual void showInventory() const = 0;
};

#endif /* __ICHARACTER_H__ */
