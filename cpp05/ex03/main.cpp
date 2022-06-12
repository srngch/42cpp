/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 15:37:26 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/12 19:04:47 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void) {
	{
		Intern i;
		Form* f;

		f = i.makeForm("shrubbery creation", "sc");
		if (f != nullptr) {
			std::cout << *f << std::endl;
			delete f;
		}

		f = i.makeForm("robotomy request", "rr");
		if (f != nullptr) {
			std::cout << *f << std::endl;
			delete f;
		}

		f = i.makeForm("presidential pardon", "pp");
		if (f != nullptr) {
			std::cout << *f << std::endl;
			delete f;
		}
	}
	std::cout << "-----------------------------" << std::endl;
	{
		Intern i;
		Form* f;
		Bureaucrat b("Bur", 1);

		f = i.makeForm("presidential pardon", "TARGET");
		std::cout << *f << std::endl;
		f->beSigned(b);
		f->execute(b);

		delete f;
	}
	std::cout << "-----------------------------" << std::endl;
	{
		Intern i;
		Form* f;

		f = i.makeForm("not a form", "Tara");
		if (f != nullptr) {
			std::cout << *f << std::endl;
			delete f;
		}
	}
	return 0;
}
