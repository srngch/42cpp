/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 01:28:24 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/12 01:29:10 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", PRESIDENTIAL_SIGN_GRADE, PRESIDENTIAL_EXEC_GRADE), target("<target>") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string target): Form("PresidentialPardonForm_to_" + target, PRESIDENTIAL_SIGN_GRADE, PRESIDENTIAL_EXEC_GRADE), target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src): Form(src.getName(), PRESIDENTIAL_SIGN_GRADE, PRESIDENTIAL_EXEC_GRADE), target(src.target) {}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {
	this->target = rhs.target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::action() const {
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
