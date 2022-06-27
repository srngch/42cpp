/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 01:39:44 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/19 01:40:02 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "main.hpp"

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int main(void) {
	Data* data = new Data;
	data->data = "Hello World";
	std::cout << data->data << std::endl;

	uintptr_t raw = serialize(data);
	std::cout << raw << std::endl;

	Data* data2 = deserialize(raw);
	std::cout << data2->data << std::endl;

	return 0;
}
