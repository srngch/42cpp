/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 01:25:43 by sarchoi           #+#    #+#             */
/*   Updated: 2022/05/26 02:01:53 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "address of string: \t\t" << &string << std::endl;
	std::cout << "address held by stringPTR: \t" << stringPTR << std::endl;
	std::cout << "address held by stringREF: \t" << &stringREF << std::endl;
	std::cout << "address of stringPTR: \t\t" << &stringPTR << std::endl;

	std::cout << "value of string: \t\t" << string << std::endl;
	std::cout << "value pointed to by stringPTR: \t" << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF: \t" << stringREF << std::endl;

	return 0;
}
