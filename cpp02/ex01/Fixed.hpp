/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:08:47 by sarchoi           #+#    #+#             */
/*   Updated: 2022/05/28 15:08:49 by sarchoi          ###   ########seoul.kr  */
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

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif /* __FIXED_H__ */
