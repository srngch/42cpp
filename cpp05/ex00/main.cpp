/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 03:43:33 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/11 18:34:24 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main(void) {
	Bureaucrat a("Ann", 1);
	std::cout << a << std::endl;
	a.decrementGrade();
	a.decrementGrade();
	std::cout << a << std::endl;
	a.incrementGrade();
	a.incrementGrade();
	std::cout << a << std::endl;

	std::cout << "------------------------" << std::endl;
	Bureaucrat b("Bob", 1);
	std::cout << b << std::endl;
	b.incrementGrade();

	std::cout << "------------------------" << std::endl;
	Bureaucrat c("Charlie", 0);

	std::cout << "------------------------" << std::endl;
	Bureaucrat d("David", 150);
	std::cout << d << std::endl;
	d.decrementGrade();

	std::cout << "------------------------" << std::endl;
	Bureaucrat e("Ethan", 151);

	return 0;
}
