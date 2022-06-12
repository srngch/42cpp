/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 02:37:50 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/12 03:54:16 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_H__
#define __INTERN_H__

#include <string>
#include <stdexcept>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
private:
	int findFormName(std::string formName) const;
	Form* makeShrubberyCreationForm(std::string target) const;
	Form* makeRobotomyRequestForm(std::string target) const;
	Form* makePresidentialPardonForm(std::string target) const;

public:
	Intern();
	Intern(Intern const & src);
	Intern & operator=(Intern const & rhs);
	~Intern();

	Form* makeForm(std::string formName, std::string formTarget);

	class FormNotFoundException;
};

std::ostream & operator<<(std::ostream & o, Intern const & rhs);

#endif /* __INTERN_H__ */
