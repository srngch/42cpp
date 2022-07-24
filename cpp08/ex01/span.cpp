/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 01:55:22 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/27 01:55:23 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>
#include "span.hpp"

Span::Span(): n(0) {}

Span::Span(unsigned int n): n(n) {}

Span::Span(Span const & src) {
	*this = src;
}

Span & Span::operator=(Span const & rhs) {
	if (this != &rhs) {
		this->n = rhs.n;
		this->arr = rhs.arr;
	}
	return *this;
}

Span::~Span(void) {}

void Span::addNumber(int n) {
	if (this->arr.size() == this->n)
		throw std::runtime_error("Span is full");

	this->arr.push_back(n);
}

unsigned int Span::shortestSpan(void) const {
	if (this->arr.size() < 2)
		throw std::runtime_error("Span is empty");

	std::vector<int> sorted = std::vector<int>(this->arr);
	std::sort(sorted.begin(), sorted.end());

	int shortest = std::abs(sorted[1] - sorted[0]);
	for (unsigned int i = 1; i < sorted.size() - 1; i++) {
		int span = std::abs(sorted[i + 1] - sorted[i]);
		if (span < shortest)
			shortest = span;
	}
	return shortest;
}

unsigned int Span::longestSpan(void) const {
	if (this->arr.size() < 2)
		throw std::runtime_error("Span is empty");

	std::vector<int> sorted = std::vector<int>(this->arr);
	std::sort(sorted.begin(), sorted.end());

	int longest = std::abs(sorted.back() - sorted.front());
	return longest;
}

void Span::addRandomNumbers(unsigned int howManyNumbers) {
	if (this->arr.size() + howManyNumbers > this->n)
		throw std::runtime_error("Span is full");

	for (unsigned int i = 0; i < howManyNumbers; i++) {
		int random = rand() % INT_MAX / 10;
		this->arr.push_back(random);
	}
}

void Span::addWithIterator(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if (this->arr.size() + std::distance(begin, end) > this->n)
		throw std::runtime_error("Span is full");

	this->arr.insert(this->arr.end(), begin, end);
}

void Span::printSorted(void) const {
	if (this->arr.size() == 0)
		throw std::runtime_error("Span is empty");

	std::vector<int> sorted = std::vector<int>(this->arr);
	std::sort(sorted.begin(), sorted.end());

	std::cout << "Sorted Span: ";
	for (unsigned int i = 0; i < sorted.size(); i++)
		std::cout << sorted[i] << " ";
	std::cout << std::endl;
}

std::vector<int> Span::getArr(void) const {
	return this->arr;
}

std::ostream & operator<<(std::ostream & o, Span const & rhs) {
	o << "Span: ";
	for (unsigned int i = 0; i < rhs.getArr().size(); i++)
		o << rhs.getArr()[i] << " ";
	o << std::endl;
	return o;
}
