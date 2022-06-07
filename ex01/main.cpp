/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 21:09:13 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/05 02:14:31 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#define ANIMALS_LENGTH 10
#define IDEAS_LENGTH 100

int main(void) {
	{
		const Animal* animal = new Animal();

		delete animal;
	}
	std::cout << "----------------------------" << std::endl;
	{
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();

		delete dog;
		delete cat;
	}
	std::cout << "----------------------------" << std::endl;
	{
		Dog *dog = new Dog();

		dog->getBrain()->setIdea(0, "Hello");
		dog->getBrain()->setIdea(1, "I am a dog");
		dog->getBrain()->setIdea(2, "I want to take a walk");
		std::cout << "0. " << dog->getBrain()->getIdea(0) << std::endl;
		std::cout << "1. " << dog->getBrain()->getIdea(1) << std::endl;
		std::cout << "2. " << dog->getBrain()->getIdea(2) << std::endl;

		Dog *dog2 = new Dog(*dog);
		std::cout << "0. " << dog2->getBrain()->getIdea(0) << std::endl;
		std::cout << "1. " << dog2->getBrain()->getIdea(1) << std::endl;
		std::cout << "2. " << dog2->getBrain()->getIdea(2) << std::endl;

		delete dog;
	}
	std::cout << "----------------------------" << std::endl;
	{
		Animal* animals[ANIMALS_LENGTH];

		for (int i = 0; i < ANIMALS_LENGTH; i++) {
			if (i < ANIMALS_LENGTH / 2) {
				animals[i] = new Dog();
			} else {
				animals[i] = new Cat();
			}
		}

		animals[9]->getBrain()->setIdea(0, "Hello");
		animals[9]->getBrain()->setIdea(1, "I am a cat");
		animals[9]->getBrain()->setIdea(2, "Bye");
		std::cout << "animals[9] 0: " << animals[9]->getBrain()->getIdea(0) << std::endl;
		std::cout << "animals[9] 1: " << animals[9]->getBrain()->getIdea(1) << std::endl;
		std::cout << "animals[9] 2: " << animals[9]->getBrain()->getIdea(2) << std::endl;


		Cat* copy = new Cat(dynamic_cast<Cat&>(*animals[9]));
		copy->getBrain()->setIdea(0, "Hi");
		std::cout << "copy idea 0: " << copy->getBrain()->getIdea(0) << std::endl;
		std::cout << "copy idea 1: " << copy->getBrain()->getIdea(1) << std::endl;
		std::cout << "copy idea 2: " << copy->getBrain()->getIdea(2) << std::endl;

		delete copy;
		for (int i = 0; i < 10; i++) {
			delete animals[i];
		}
	}
	return 0;
}
