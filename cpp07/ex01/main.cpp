/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:57:05 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/19 16:57:06 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template <typename T>
void print_with_format(T &e) {
	std::cout << "- " << e << std::endl;
}

void print_int(int &n) {
	std::cout << n << std::endl;
}

int main() {
	int array[5] = {1, 2, 3, 4, 5};
	iter(array, 5, print_int);
	iter(array, 5, print_with_format);

	std::string array_char[5] = {"string1", "string2", "string3", "string4", "string5"};
	iter(array_char, 5, print_with_format);

	return 0;
}
