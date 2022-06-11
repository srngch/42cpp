/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 15:37:12 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/11 16:14:03 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat::GradeTooHighException : public std::exception {
public:
	virtual const char *what() const throw() {
		return "Grade too high";
	}
};

class Bureaucrat::GradeTooLowException : public std::exception {
public:
	virtual const char *what() const throw() {
		return "Grade too low";
	}
};

Bureaucrat::Bureaucrat(): name(""), grade(LOWEST_GRADE) {}

Bureaucrat::Bureaucrat(const std::string name, int grade): name(name), grade(grade) {
	try {
		if (grade < HIGHEST_GRADE)
			throw Bureaucrat::GradeTooHighException();
		if (grade > LOWEST_GRADE)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (Bureaucrat::GradeTooHighException & e) {
		std::cout << e.what() << std::endl;
		exit(EXIT_FAILURE);
	}
	catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
		exit(EXIT_FAILURE);
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) {
	*this = src;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {
	if (this != &rhs) {
		this->grade = rhs.grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat(void) {}

const std::string & Bureaucrat::getName(void) const {
	return this->name;
}

int Bureaucrat::getGrade(void) const {
	return this->grade;
}

void Bureaucrat::incrementGrade(void) {
	try {
		if (this->grade - 1 < HIGHEST_GRADE)
			throw Bureaucrat::GradeTooHighException();
		this->grade--;
	}
	catch (Bureaucrat::GradeTooHighException & e) {
		std::cout << e.what() << std::endl;
		exit(EXIT_FAILURE);
	}
}

void Bureaucrat::decrementGrade(void) {
	try {
		if (this->grade + 1 > LOWEST_GRADE)
			throw Bureaucrat::GradeTooLowException();
		this->grade++;
	}
	catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
		exit(EXIT_FAILURE);
	}
}

void Bureaucrat::signForm(Form & f) {
	if (f.beSigned(*this))
		std::cout << this->getName() << " signs " << f.getName() << std::endl;
	else
		std::cout << this->getName() << " couldn't sign " << f.getName() << " because " << this->getName() << " is not high enough grade" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}
