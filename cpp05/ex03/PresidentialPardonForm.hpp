/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 01:27:22 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/12 01:28:19 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM_H__
#define __PRESIDENTIALPARDONFORM_H__

#include <string>
// #include <stdexcept>
#include "Bureaucrat.hpp"
#include "Form.hpp"

#define PRESIDENTIAL_SIGN_GRADE 25
#define PRESIDENTIAL_EXEC_GRADE 5

class PresidentialPardonForm : public Form {
private:
	std::string target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string target);
	PresidentialPardonForm(PresidentialPardonForm const & src);
	PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);
	virtual ~PresidentialPardonForm();

	virtual void action() const;
};

#endif /* __PRESIDENTIALPARDONFORM_H__ */
