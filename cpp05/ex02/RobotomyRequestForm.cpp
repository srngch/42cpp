/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 01:18:02 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/12 01:26:58 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", ROBOTOMY_SIGN_GRADE, ROBOTOMY_EXEC_GRADE), target("<target>") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string target): Form("RobotomyRequestForm_to_" + target, ROBOTOMY_SIGN_GRADE, ROBOTOMY_EXEC_GRADE), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src): Form(src.getName(), ROBOTOMY_SIGN_GRADE, ROBOTOMY_EXEC_GRADE), target(src.target) {}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {
	this->target = rhs.target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::action() const {
	std::cout << "- drilling noises - " << std::endl;
	if (std::rand() % 2 == 0)
		std::cout << this->target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "Drilling failed, " << this->target << " has not been robotomized" << std::endl;
}
