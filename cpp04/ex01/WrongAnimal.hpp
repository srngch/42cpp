/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 18:18:28 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/04 18:18:31 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_H__
#define __WRONGANIMAL_H__

#include <string>

class WrongAnimal {
protected:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const & src);
	WrongAnimal & operator=(WrongAnimal const & rhs);
	~WrongAnimal();

	std::string getType() const;
	void setType(std::string type);

	void makeSound() const;
};

#endif /* __WRONGANIMAL_H__ */
