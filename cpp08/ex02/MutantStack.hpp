/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 00:43:55 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/29 00:43:56 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_HPP__
#define __MUTANTSTACK_HPP__

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
private:

public:
	MutantStack<T>() : std::stack<T>() {}
	MutantStack<T>(MutantStack<T> const & src) : std::stack<T>() {
		*this = src;
	};
	MutantStack<T> &operator=(MutantStack<T> const & rhs) {
		if (this != &rhs) {
			this->c = rhs.c;
		}
		return *this;
	};
	~MutantStack<T>() {};

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

	iterator begin() { return this->c.begin(); };
	iterator end() { return this->c.end(); };

	reverse_iterator rbegin() { return this->c.rbegin(); };
	reverse_iterator rend() { return this->c.rend(); };
};

#endif /* __MUTANTSTACK_HPP__ */
