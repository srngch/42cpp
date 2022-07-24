/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:55:21 by sarchoi           #+#    #+#             */
/*   Updated: 2022/07/24 21:46:13 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
#define __CAT_H__

#include <string>
#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(Cat const & src);
	Cat & operator=(Cat const & rhs);
	virtual ~Cat();

	virtual void makeSound() const;
};

#endif /* __CAT_H__ */
