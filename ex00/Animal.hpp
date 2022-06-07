/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:48:27 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/04 20:55:14 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <string>

class Animal {
protected:
	std::string type;

public:
	Animal();
	Animal(Animal const & src);
	Animal & operator=(Animal const & rhs);
	~Animal();

	std::string getType() const;
	void setType(std::string type);

	virtual void makeSound() const;
};

#endif /* __ANIMAL_H__ */
