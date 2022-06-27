/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 15:37:29 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/12 01:00:05 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"

class Form::GradeTooHighException : public std::exception {
public:
	virtual const char *what() const throw() {
		return "<Error:Form> Grade too high";
	}
};

class Form::GradeTooLowException : public std::exception {
public:
	virtual const char *what() const throw() {
		return "<Error: Form> Grade too low";
	}
};

class Form::NotSignedException : public std::exception {
public:
	virtual const char *what() const throw() {
		return "<Error: Form> Form not signed";
	}
};

Form::Form(): name(""), isSigned(false), gradeToSign(LOWEST_GRADE), gradeToExecute(LOWEST_GRADE) {}

Form::Form(const std::string name, int gradeToSign, int gradeToExecute): name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
	try {
		if (gradeToSign < HIGHEST_GRADE || gradeToExecute < HIGHEST_GRADE)
			throw Form::GradeTooHighException();
		if (gradeToSign > LOWEST_GRADE || gradeToExecute > LOWEST_GRADE)
			throw Form::GradeTooLowException();
	}
	catch (Form::GradeTooHighException & e) {
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
	}
}

Form::Form(Form const & src): name(src.name), isSigned(src.isSigned), gradeToSign(src.gradeToSign), gradeToExecute(src.gradeToExecute) {}

Form & Form::operator=(Form const & rhs) {
	if (this != &rhs) {
		this->isSigned = rhs.isSigned;
	}
	return *this;
}

Form::~Form(void) {}

const std::string & Form::getName() const {
	return this->name;
}

bool Form::getIsSigned() const {
	return this->isSigned;
}

int Form::getGradeToSign() const {
	return this->gradeToSign;
}

int Form::getGradeToExecute() const {
	return this->gradeToExecute;
}

void Form::setIsSigned(bool isSigned) {
	this->isSigned = isSigned;
}

bool Form::beSigned(Bureaucrat & b) {
	try {
		if (b.getGrade() > this->gradeToSign) {
			throw Form::GradeTooLowException();
		}
		this->isSigned = true;
		return true;
	}
	catch (Form::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
		return false;
	}
}

bool Form::execute(Bureaucrat const & executor) const {
	try {
		if (!this->isSigned)
			throw Form::NotSignedException();
		if (executor.getGrade() > this->gradeToExecute) {
			throw Form::GradeTooLowException();
		}
		this->action();
		return true;
	}
	catch (Form::NotSignedException & e) {
		std::cout << e.what() << std::endl;
		return false;
	}
	catch (Form::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
		return false;
	}
}

std::ostream & operator<<(std::ostream & o, Form const & rhs) {
	o << "Form: " << rhs.getName() << std::endl;
	o << "- Grade to sign: " << rhs.getGradeToSign() << std::endl;
	o << "- Grade to execute: " << rhs.getGradeToExecute() << std::endl;
	o << "- Signed: " << rhs.getIsSigned() << std::endl;
	return o;
}
