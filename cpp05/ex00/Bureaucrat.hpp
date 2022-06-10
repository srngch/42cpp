/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 03:43:40 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/11 03:43:41 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__

#include <string>
#include <stdexcept>

#define HIGHEST_GRADE 1
#define LOWEST_GRADE 150

class Bureaucrat {
private:
	const std::string name;
	int grade;

public:
	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(Bureaucrat const & src);
	Bureaucrat & operator=(Bureaucrat const & rhs);
	~Bureaucrat();

	const std::string & getName() const;
	int getGrade() const;

	void incrementGrade();
	void decrementGrade();

	class GradeTooHighException;
	class GradeTooLowException;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif /* __BUREAUCRAT_H__ */
