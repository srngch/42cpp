/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 00:51:35 by sarchoi           #+#    #+#             */
/*   Updated: 2022/05/17 02:10:58 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

int main(int argc, char **argv) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++) {
		std::locale loc;
		std::string str = argv[i];
		for (std::string::size_type j = 0; j < str.length(); j++)
			std::cout << std::toupper(str[j], loc);
	}
	std::cout << std::endl;
	return 0;
}
