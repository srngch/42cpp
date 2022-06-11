/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 15:37:23 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/12 00:54:15 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_H__
#define __FORM_H__

#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	const std::string name;
	bool isSigned;
	const int gradeToSign;
	const int gradeToExecute;

public:
	Form();
	Form(const std::string name, int gradeToSign, int gradeToExecute);
	Form(Form const & src);
	Form & operator=(Form const & rhs);
	virtual ~Form();

	const std::string & getName() const;
	bool getIsSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;

	void setIsSigned(bool isSigned);

	bool beSigned(Bureaucrat & b);
	bool execute(Bureaucrat const & executor) const;
	virtual void action() const = 0;

	class GradeTooHighException;
	class GradeTooLowException;
	class NotSignedException;
};

std::ostream & operator<<(std::ostream & o, Form const & rhs);

#endif /* __FORM_H__ */
