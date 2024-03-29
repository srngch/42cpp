/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:55:18 by sarchoi           #+#    #+#             */
/*   Updated: 2022/07/24 21:46:14 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H__
#define __DOG_H__

#include <string>
#include "Animal.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(Dog const & src);
	Dog & operator=(Dog const & rhs);
	virtual ~Dog();

	virtual void makeSound() const;
};

#endif /* __DOG_H__ */
