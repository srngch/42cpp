/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 01:55:33 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/27 01:55:33 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_H__
#define __SPAN_H__

#include <iostream>
#include <vector>

class Span {
private:
	unsigned int n;
	std::vector<int> arr;

public:
	Span();
	Span(unsigned int n);
	Span(Span const & src);
	Span & operator=(Span const & rhs);
	~Span();

	void addNumber(int n);
	unsigned int shortestSpan(void) const;
	unsigned int longestSpan(void) const;
	void addRandomNumbers(unsigned int howManyNumbers);
	void addWithIterator(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	void printSorted(void) const;

	std::vector<int> getArr(void) const;
};

std::ostream & operator<<(std::ostream & o, Span const & rhs);

#endif /* __SPAN_H__ */
