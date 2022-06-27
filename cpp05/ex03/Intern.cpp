/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 02:43:53 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/12 03:54:20 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"

class Intern::FormNotFoundException : public std::exception {
public:
	virtual const char *what() const throw() {
		return "Form not found";
	}
};

Intern::Intern() {}

Intern::Intern(Intern const & src) {
	*this = src;
}

Intern & Intern::operator=(Intern const & rhs) {
	if (this != &rhs) {
	}
	return *this;
}

Intern::~Intern(void) {}

int Intern::findFormName(std::string formName) const {
	std::string forms[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	for (int i = 0; i < 3; i++) {
		if (forms[i] == formName)
			return i;
	}
	throw Intern::FormNotFoundException();
}

Form* Intern::makeShrubberyCreationForm(std::string target) const {
	return new ShrubberyCreationForm(target);
}

Form* Intern::makeRobotomyRequestForm(std::string target) const {
	return new RobotomyRequestForm(target);
}

Form* Intern::makePresidentialPardonForm(std::string target) const {
	return new PresidentialPardonForm(target);
}

Form* Intern::makeForm(std::string formName, std::string formTarget) {
	try {
		Form* (Intern::*formFunctions[])(std::string) const = {
			&Intern::makeShrubberyCreationForm,
			&Intern::makeRobotomyRequestForm,
			&Intern::makePresidentialPardonForm
		};

		return (this->*formFunctions[this->findFormName(formName)])(formTarget);
	}
	catch (Intern::FormNotFoundException & e) {
		std::cout << e.what() << std::endl;
		return nullptr;
	}
}

std::ostream & operator<<(std::ostream & o, Intern const & rhs) {
	(void)rhs;
	o <<  " Intern " << std::endl;
	return o;
}
