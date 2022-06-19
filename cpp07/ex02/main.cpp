/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 17:31:25 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/19 17:31:26 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main() {
	Array<int> empty_array;
	Array<int> int_array(10);
	Array<int> copied_int_array(int_array);

	std::cout << "empty_array: " << std::endl;
	std::cout << empty_array << std::endl;
	std::cout << "int_array: " << std::endl;
	std::cout << int_array << std::endl;
	std::cout << "copied_int_array: " << std::endl;
	std::cout << copied_int_array << std::endl;

	std::cout << "empty_array.size(): " << empty_array.size() << std::endl;
	std::cout << "int_array.size(): " << int_array.size() << std::endl;
	std::cout << "copied_int_array.size(): " << copied_int_array.size() << std::endl << std::endl;

	Array<std::string> string_array(5);
	string_array[0] = "string0";
	string_array[1] = "string1";
	string_array[2] = "string2";
	string_array[3] = "string3";
	string_array[4] = "string4";

	Array<std::string> copied_string_array(string_array);
	copied_string_array[0] = "string0_copy";
	copied_string_array[1] = "string1_copy";
	copied_string_array[2] = "string2_copy";
	copied_string_array[3] = "string3_copy";
	copied_string_array[4] = "string4_copy";

	std::cout << "string_array: " << std::endl;
	std::cout << string_array << std::endl;
	std::cout << "copied_string_array: " << std::endl;
	std::cout << copied_string_array << std::endl;
	std::cout << "string_array: " << std::endl;
	std::cout << string_array << std::endl;

	std::cout << "string_array[0]: " << string_array[0] << std::endl;

	try {
		std::cout << "string_array[10]: " << string_array[10] << std::endl;
	} catch (std::exception &e) {
		std::cout << "std::exception: " << e.what() << std::endl;
	}

	try {
		std::cout << "string_array[-1]: " << string_array[-1] << std::endl;
	} catch (std::exception &e) {
		std::cout << "std::exception: " << e.what() << std::endl;
	}

	return 0;
}
