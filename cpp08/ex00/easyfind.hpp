/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 22:35:31 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/26 22:35:52 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_HPP__
#define __EASYFIND_HPP__

#include <stdexcept>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, int target) {
	typename T::iterator found = std::find(container.begin(), container.end(), target);

	if (found == container.end())
		throw std::runtime_error("Element not found");
	return found;
}

#endif /* __EASYFIND_HPP__ */
