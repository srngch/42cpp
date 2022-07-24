/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 17:31:12 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/19 17:31:13 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_H__
#define __ARRAY_H__

#include <stdexcept>

template <typename T>
class Array {
private:
	unsigned int array_size;
	T *array;

public:
	Array<T>(): array_size(0), array(nullptr) {}
	Array<T>(unsigned int n): array_size(n), array(new T[n]) {}
	Array<T>(Array const & src): array_size(src.array_size), array(new T[src.array_size]) {
		for (unsigned int i = 0; i < this->array_size; i++)
			array[i] = src.array[i];
	}
	Array<T> &operator=(Array const & rhs) {
		if (this != &rhs) {
			delete[] this->array;
			this->array_size = rhs.array_size;
			this->array = new T[this->array_size];
			for (unsigned int i = 0; i < this->array_size; i++)
				this->array[i] = rhs.array[i];
		}
		return *this;
	}
	~Array<T>() {
		delete [] array;
	}

	T &operator[](const unsigned int i) const {
		if (i >= this->array_size)
			throw std::out_of_range("Index out of range");
		return array[i];
	}
	unsigned int size() const {
		return this->array_size;
	}
};

template <typename T>
std::ostream &operator<<(std::ostream &o, const Array<T> &rhs)
{
	o << "[ ";
	for (unsigned int i = 0; i < rhs.size(); i++) {
		if (i != 0)
			o << ", ";
		o << rhs[i];
	}
	o << " ]" << std::endl;
	return o;
}

#endif /* __ARRAY_H__ */
