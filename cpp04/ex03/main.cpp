/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 02:39:39 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/09 14:07:25 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int main(void) {
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	std::cout << "---------------" << std::endl;
	{
		std::cout << "<Test: Materia is full>" << std::endl;
		IMateriaSource* src = new MateriaSource();

		src->showMaterias();
		src->learnMateria(new Ice());
		std::cout << "Learn 1st" << std::endl;
		src->learnMateria(new Cure());
		std::cout << "Learn 2nd" << std::endl;
		src->learnMateria(new Ice());
		std::cout << "Learn 3rd" << std::endl;
		src->learnMateria(new Cure());
		std::cout << "Learn 4th" << std::endl;
		src->showMaterias();
		src->learnMateria(new Ice());
		delete src;
	}
	std::cout << "---------------" << std::endl;
	{
		std::cout << "<Test: Inventory is full>" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());

		ICharacter* me = new Character("me");
		me->showInventory();

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		me->showInventory();
		tmp = src->createMateria("ice");
		me->equip(tmp);

		delete me;
		delete src;
	}
	std::cout << "---------------" << std::endl;
	{
		std::cout << "<Test: Copy Character Class>" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		me->showInventory();

		ICharacter* copiedMe = new Character(static_cast<Character const &>(*me));
		std::cout << "Copy me" << std::endl;
		copiedMe->showInventory();

		delete me;
		delete copiedMe;
		delete src;
	}
	std::cout << "---------------" << std::endl;
	{
		std::cout << "<Test: Copy MateriaSource Class>" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		src->showMaterias();
		IMateriaSource* copiedSrc = new MateriaSource(static_cast<MateriaSource const &>(*src));
		std::cout << "Copy src" << std::endl;
		copiedSrc->showMaterias();

		delete src;
		delete copiedSrc;
	}
	return 0;
}
