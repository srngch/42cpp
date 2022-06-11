/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 19:41:23 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/12 01:17:04 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM_H__
#define __SHRUBBERYCREATIONFORM_H__

#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "Form.hpp"

#define SHRUBBERY_SIGN_GRADE 145
#define SHRUBBERY_EXEC_GRADE 137

class ShrubberyCreationForm : public Form {
private:
	std::string target;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);
	virtual ~ShrubberyCreationForm();

	virtual void action() const;
};

#endif /* __SHRUBBERYCREATIONFORM_H__ */
