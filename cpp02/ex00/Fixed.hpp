/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 03:22:45 by sarchoi           #+#    #+#             */
/*   Updated: 2022/05/28 03:22:51 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
#define __FIXED_H__

#include <string>

class Fixed {
private:
	int fixed_point;
	static const int fractional_bits = 8;

public:
	Fixed();
	Fixed(Fixed const & src);
	Fixed & operator=(Fixed const & rhs);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif /* __FIXED_H__ */
