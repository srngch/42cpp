/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 01:55:31 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/19 01:55:31 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __A_H__
#define __A_H__

#include "Base.hpp"

class A : public Base {
public:
	A();
	A(A const & src);
	A & operator=(A const & rhs);
	~A();
};

#endif /* __A_H__ */
