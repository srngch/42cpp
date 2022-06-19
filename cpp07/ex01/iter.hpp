/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:57:02 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/19 16:57:02 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_H__
#define __ITER_H__

template <typename T>
void iter(T *array, int length, void (*f)(T &))
{
	for (int i = 0; i < length; i++)
		f(array[i]);
}

#endif /* __ITER_H__ */
