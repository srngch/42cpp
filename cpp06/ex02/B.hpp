/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 01:55:33 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/19 01:55:33 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __B_H__
#define __B_H__

#include "Base.hpp"

class B : public Base {
public:
	B();
	B(B const & src);
	B & operator=(B const & rhs);
	~B();
};

#endif /* __B_H__ */
