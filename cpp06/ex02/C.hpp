/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 01:55:35 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/19 01:55:36 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __C_H__
#define __C_H__

#include "Base.hpp"

class C : public Base {
public:
	C();
	C(C const & src);
	C & operator=(C const & rhs);
	~C();
};

#endif /* __C_H__ */
