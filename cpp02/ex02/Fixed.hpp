/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 17:06:13 by sarchoi           #+#    #+#             */
/*   Updated: 2022/05/28 17:06:14 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
#define __FIXED_H__

#include <string>
#include <iostream>

class Fixed {
private:
	int fixed_point;
	static const int fractional_bits = 8;

public:
	Fixed(void);
	Fixed(const int n);
	Fixed(const float n);
	Fixed(Fixed const & src);
	Fixed & operator=(Fixed const & rhs);
	~Fixed();

	bool operator<(Fixed const & rhs);
	bool operator>(Fixed const & rhs);
	bool operator>=(Fixed const & rhs);
	bool operator<=(Fixed const & rhs);
	bool operator==(Fixed const & rhs);
	bool operator!=(Fixed const & rhs);

	Fixed operator+(Fixed const & rhs);
	Fixed operator-(Fixed const & rhs);
	Fixed operator*(Fixed const & rhs);
	Fixed operator/(Fixed const & rhs);

	// prefix
	Fixed & operator++(void);
	Fixed & operator--(void);
	// postfix
	Fixed operator++(int);
	Fixed operator--(int);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;

	static Fixed & min(Fixed & a, Fixed & b);
	static Fixed const & min(Fixed const & a, Fixed const & b);
	static Fixed & max(Fixed & a, Fixed & b);
	static Fixed const & max(Fixed const & a, Fixed const & b);
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif /* __FIXED_H__ */
