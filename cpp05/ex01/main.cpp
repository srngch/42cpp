/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 15:37:26 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/11 18:32:31 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
	Bureaucrat a("Ann", 1);
	Form f("Paper", 1, 1);

	std::cout << a << std::endl;
	std::cout << f << std::endl;

	std::cout << "------------------------" << std::endl;
	std::cout << "# Case 1: the bureaucrat can sign the form" << std::endl;
	Bureaucrat b("Bob", 1);
	Form f2("Form No.5", 5, 5);
	std::cout << b << std::endl;
	std::cout << f2 << std::endl;

	b.signForm(f2);

	std::cout << "------------------------" << std::endl;
	std::cout << "# Case 2: the bureaucrat can Not sign the form(GradeTooLowException)" << std::endl;
	Bureaucrat c("Charlie", 5);
	Form f3("Paper No.1", 1, 1);
	std::cout << c << std::endl;
	std::cout << f3 << std::endl;

	c.signForm(f3);

	std::cout << "------------------------" << std::endl;
	std::cout << "# Case 3: increment the grade of the bureaucrat and retry" << std::endl;
	Bureaucrat d("Dory", 2);
	Form f4("Paper No.1", 1, 1);
	std::cout << d << std::endl;
	std::cout << f4 << std::endl;

	d.signForm(f4);
	d.incrementGrade();
	std::cout << std::endl;
	std::cout << d << std::endl;
	d.signForm(f4);

	return 0;
}
