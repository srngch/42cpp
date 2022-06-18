/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 01:22:34 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/19 01:26:15 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MAIN_H__
#define __MAIN_H__

#include <iostream>
#include <string>
#include <limits>
#include <cmath>

enum type
{
	PSEUDO_LITERAL,
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	UNKNOWN
};

type checkType(std::string const &str);

void convert_pseudo_literal(std::string const &str);
void convert(std::string const &str);

#endif /* __MAIN_H__ */
