/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 17:06:07 by sarchoi           #+#    #+#             */
/*   Updated: 2022/05/28 17:06:08 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed(void) {
	this->fixed_point = 0;
}

Fixed::Fixed(const int n) {
	this->fixed_point = n << this->fractional_bits;
}

Fixed::Fixed(const float n) {
	this->fixed_point = roundf(n * (1 << this->fractional_bits));
}

Fixed::Fixed(Fixed const & src) {
	*this = src;
}

Fixed & Fixed::operator=(Fixed const & rhs) {
	if (this != &rhs) {
		this->fixed_point = rhs.getRawBits();
	}
	return *this;
}

Fixed::~Fixed(void) {}

int Fixed::getRawBits(void) const {
	return this->fixed_point;
}

void Fixed::setRawBits(int const raw) {
	this->fixed_point = raw;
}

float Fixed::toFloat(void) const {
	return (float)this->fixed_point / (1 << this->fractional_bits);
}

int Fixed::toInt(void) const {
	return this->fixed_point >> this->fractional_bits;
}

bool Fixed::operator<(Fixed const & rhs) {
	return this->toFloat() < rhs.toFloat();
}

bool Fixed::operator>(Fixed const & rhs) {
	return this->toFloat() > rhs.toFloat();
}

bool Fixed::operator>=(Fixed const & rhs) {
	return this->toFloat() >= rhs.toFloat();
}

bool Fixed::operator<=(Fixed const & rhs) {
	return this->toFloat() <= rhs.toFloat();
}

bool Fixed::operator==(Fixed const & rhs) {
	return this->toFloat() == rhs.toFloat();
}

bool Fixed::operator!=(Fixed const & rhs) {
	return this->toFloat() != rhs.toFloat();
}

Fixed Fixed::operator+(Fixed const & rhs) {
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const & rhs) {
	return Fixed(this->toFloat() - rhs.toFloat());
}
Fixed Fixed::operator*(Fixed const & rhs) {
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const & rhs) {
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed & Fixed::operator++(void) {
	this->fixed_point += 1;
	return *this;
}

Fixed & Fixed::operator--(void) {
	this->fixed_point -= 1;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	this->fixed_point += 1;
	return tmp; // return value before increment
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	this->fixed_point -= 1;
	return tmp; // return value before decrement
}

Fixed & Fixed::min(Fixed & a, Fixed & b) {
	if (a.toFloat() < b.toFloat()) {
		return a;
	}
	return b;
}

Fixed const & Fixed::min(Fixed const & a, Fixed const & b) {
	if (a.toFloat() < b.toFloat()) {
		return a;
	}
	return b;
}

Fixed & Fixed::max(Fixed & a, Fixed & b) {
	if (a.toFloat() > b.toFloat()) {
		return a;
	}
	return b;
}

Fixed const & Fixed::max(Fixed const & a, Fixed const & b) {
	if (a.toFloat() > b.toFloat()) {
		return a;
	}
	return b;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return o;
}
