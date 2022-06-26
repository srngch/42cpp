/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 22:35:33 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/26 22:35:34 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main() {
	std::vector<int> v;
	std::vector<int>::iterator iter;

	for (int i = 0; i < 10; i++)
		v.push_back(i);

	try {
		iter = easyfind(v, 5);
		std::cout << "iter: " << *iter << std::endl;
		iter = easyfind(v, 99);
		std::cout << "iter: " << *iter << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
