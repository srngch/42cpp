/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 01:55:17 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/19 02:19:16 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate() {
	srand(time(NULL));
	int n = rand() % 3;
	std::cout << "n = " << n << std::endl;
	if (n == 0)
		return new A;
	if (n == 1)
		return new B;
	return new C;
}

void identify(Base* p) {
	try {
		if (dynamic_cast<A*>(p)) {
			std::cout << "A" << std::endl;
			return;
		}
		if (dynamic_cast<B*>(p)) {
			std::cout << "B" << std::endl;
			return;
		}
		if (dynamic_cast<C*>(p)) {
			std::cout << "C" << std::endl;
			return;
		}
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

void identify(Base& p) {
	try {
		A &a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)a;
	} catch (std::exception & e) {}
	try {
		B &b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		(void)b;
	} catch (std::exception & e) {}
	try {
		C &c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		(void)c;
	} catch (std::exception & e) {}
}

int main() {
	Base *p = generate();
	identify(p);
	identify(*p);
	delete p;

	return 0;
}
