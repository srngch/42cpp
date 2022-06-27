/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 17:58:57 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/05 20:34:56 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_H__
#define __CHARACTER_H__

#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

#define INVENTORY_SIZE 4
#define MAX_FIELD_LEN 10

class Character : public ICharacter {
private:
	std::string name;
	AMateria* inventory[INVENTORY_SIZE];

public:
	Character();
	Character(std::string name);
	Character(Character const & src);
	Character & operator=(Character const & rhs);
	~Character();

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

	virtual void showInventory() const;
};

#endif /* __CHARACTER_H__ */
