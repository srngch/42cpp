/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 01:55:19 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/27 01:55:20 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "span.hpp"

int main() {
	srand(time(NULL));

	std::cout << "<TEST> add random numbers" << std::endl;
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp << std::endl;
	sp.printSorted();

	std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "longest span: " <<sp.longestSpan() << std::endl;

	std::cout << "-----------------" << std::endl;
	std::cout << "<TEST> add random numbers(minus, plus)" << std::endl;

	Span sp2 = Span(5);

	sp2.addNumber(-100);
	sp2.addNumber(-50);
	sp2.addNumber(-42);
	sp2.addNumber(0);
	sp2.addNumber(99);

	std::cout << sp2 << std::endl;
	sp2.printSorted();

	std::cout << "shortest span: " << sp2.shortestSpan() << std::endl;
	std::cout << "longest span: " <<sp2.longestSpan() << std::endl;

	std::cout << "-----------------" << std::endl;
	std::cout << "<TEST> 5 random numbers" << std::endl;
	Span sp3 = Span(5);
	sp3.addRandomNumbers(5);
	std::cout << "random numbers: " << std::endl;
	std::cout << sp3 << std::endl;
	sp3.printSorted();

	std::cout << "shortest span: " << sp3.shortestSpan() << std::endl;
	std::cout << "longest span: " <<sp3.longestSpan() << std::endl;

	std::cout << "-----------------" << std::endl;
	std::cout << "<TEST> 10000 random numbers" << std::endl;
	Span sp4 = Span(10000);

	sp4.addRandomNumbers(10000);
	std::cout << "shortest span: " << sp4.shortestSpan() << std::endl;
	std::cout << "longest span: " <<sp4.longestSpan() << std::endl;

	std::cout << "-----------------" << std::endl;

	std::cout << "<TEST Error Handling> throw exception when adding too many numbers" << std::endl;
	Span sp5 = Span(5);

	try {
		sp5.addNumber(-100);
		sp5.addNumber(-50);
		sp5.addNumber(-42);
		sp5.addNumber(0);
		sp5.addNumber(99);
		std::cout << sp5 << std::endl;
		sp5.addNumber(123);
		std::cout << sp5 << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "-----------------" << std::endl;

	std::cout << "<TEST Error Handling> throw exception when span is empty" << std::endl;
	Span sp6 = Span(5);
	try {
		std::cout << sp6.shortestSpan() << std::endl;
  	std::cout << sp6.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "-----------------" << std::endl;
	std::cout << "<TEST> add numbers using a range of iterators " << std::endl;
	Span sp7 = Span(5);
	std::vector<int> v;

	v.push_back(42);
	v.push_back(1);
	v.push_back(-42);
	v.push_back(0);
	v.push_back(99);

	sp7.addWithIterator(v.begin(), v.end());
	std::cout << sp7 << std::endl;
	sp7.printSorted();
	std::cout << "shortest span: " << sp7.shortestSpan() << std::endl;
	std::cout << "longest span: " <<sp7.longestSpan() << std::endl;

	return 0;
}
