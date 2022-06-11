/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 15:37:26 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/12 01:29:58 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {
	{
		Bureaucrat b("Bu", 1);
		Form *f = new ShrubberyCreationForm("home");

		b.signForm(*f);
		b.executeForm(*f);

		delete f;
	}
	std::cout << "-----------------------------" << std::endl;
	{
		Bureaucrat b("Bu", 1);
		Form *f = new RobotomyRequestForm("Tom");

		b.signForm(*f);
		b.executeForm(*f);

		delete f;
	}
	std::cout << "-----------------------------" << std::endl;
	{
		Bureaucrat b("Bu", 1);
		Form *f = new PresidentialPardonForm("Penelope");

		b.signForm(*f);
		b.executeForm(*f);

		delete f;
	}
	std::cout << "-----------------------------" << std::endl;
	{
		std::cout << "# Test : Try to execute a form that is not signed" << std::endl;
		Bureaucrat b("Bu", 1);
		Form *f = new ShrubberyCreationForm("home");

		b.executeForm(*f);

		delete f;
	}
	std::cout << "-----------------------------" << std::endl;
	{
		std::cout << "# Test : Try to sign a form that is higher than the bureaucrat's grade" << std::endl;
		Bureaucrat b("Bu", 150);
		Form *f = new ShrubberyCreationForm("home");

		b.signForm(*f);
	}
	std::cout << "-----------------------------" << std::endl;
	{
		std::cout << "# Test : Try to execute a form that is higher than the bureaucrat's grade" << std::endl;
		Bureaucrat b("Bu", 145);
		Form *f = new ShrubberyCreationForm("home");

		b.signForm(*f);
		b.executeForm(*f);
	}
	return 0;
}
