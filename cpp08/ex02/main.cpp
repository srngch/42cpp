/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:41:19 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/29 00:45:45 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <list>
#include "MutantStack.hpp"

int main()
{
	std::stack<int> s1;

	s1.push(3);
	s1.push(5);
	s1.push(737);
	s1.push(0);

	std::cout << "------------" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top: " << mstack.top() << std::endl;

	mstack.pop();
	std::cout << "size: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	std::cout << "print with iterator" << std::endl;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}

	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();

	++rit;
	--rit;
	std::cout << "print with reverse iterator" << std::endl;
	while (rit != rite) {
		std::cout << *rit << std::endl;
		++rit;
	}

	std::stack<int> s(mstack);

	std::cout << "------------" << std::endl;

	std::list<int> l;
	l.push_back(5);
	l.push_back(17);
	std::cout << "back: " << l.back() << std::endl;

	l.pop_back();
	std::cout << "size: " << l.size() << std::endl;

	l.push_back(3);
	l.push_back(5);
	l.push_back(737);
	l.push_back(0);

	std::list<int>::iterator it2 = l.begin();
	std::list<int>::iterator ite2 = l.end();

	++it2;
	--it2;
	std::cout << "print with iterator" << std::endl;
	while (it2 != ite2) {
		std::cout << *it2 << std::endl;
		++it2;
	}

	std::list<int>::reverse_iterator rit2 = l.rbegin();
	std::list<int>::reverse_iterator rite2 = l.rend();

	++rit2;
	--rit2;
	std::cout << "print with reverse iterator" << std::endl;
	while (rit2 != rite2) {
		std::cout << *rit2 << std::endl;
		++rit2;
	}

	return 0;
}
