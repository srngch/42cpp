/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 03:43:33 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/11 03:43:34 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

void case_1() {
	Bureaucrat b("Bob", 1);
	std::cout << b << std::endl;
	b.incrementGrade();
}

void case_2() {
	Bureaucrat c("Charlie", 0);
}

void case_3() {
	Bureaucrat d("David", 150);
	std::cout << d << std::endl;
	d.decrementGrade();
}

void case_4() {
	Bureaucrat e("Ethan", 151);
}

int main(void) {
	Bureaucrat a("Ann", 1);
	std::cout << a << std::endl;
	a.decrementGrade();
	a.decrementGrade();
	std::cout << a << std::endl;
	a.incrementGrade();
	a.incrementGrade();
	std::cout << a << std::endl;

	std::cout << "------------------------" << std::endl;

	int select;
	std::cout << "select number> ";
	std::cin >> select;
	std::cout << "------------------------" << std::endl;

	switch (select)
	{
	case 1:
		case_1();
		break;
	case 2:
		case_2();
		break;
	case 3:
		case_3();
		break;
	case 4:
		case_4();
		break;
	default:
		break;
	}

	return 0;
}
