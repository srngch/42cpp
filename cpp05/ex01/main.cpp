/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 15:37:26 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/11 16:25:57 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

void case_1() {
	std::cout << "# Case 1: the bureaucrat can sign the form" << std::endl;
	Bureaucrat b("Bob", 1);
	Form f("Form No.5", 5, 5);
	std::cout << b << std::endl;
	std::cout << f << std::endl;

	b.signForm(f);
}

void case_2() {
	std::cout << "# Case 2: the bureaucrat can Not sign the form(GradeTooLowException)" << std::endl;
	Bureaucrat c("Charlie", 5);
	Form f("Paper No.1", 1, 1);
	std::cout << c << std::endl;
	std::cout << f << std::endl;

	c.signForm(f);
}

void case_3() {
	std::cout << "# Case 3: increment the grade of the bureaucrat and retry" << std::endl;
	Bureaucrat d("Dory", 2);
	Form f("Paper No.1", 1, 1);
	std::cout << d << std::endl;
	std::cout << f << std::endl;

	d.signForm(f);
	d.incrementGrade();
	std::cout << std::endl;
	std::cout << d << std::endl;
	d.signForm(f);
}

int main(void) {
	Bureaucrat a("Ann", 1);
	Form f("Paper", 1, 1);

	std::cout << a << std::endl;
	std::cout << f << std::endl;
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
		default:
			break;
	}

	return 0;
}
