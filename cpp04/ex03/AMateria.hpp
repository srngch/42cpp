/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 02:40:42 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/05 19:08:54 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_H__
#define __AMATERIA_H__

#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
protected:
	std::string type;

public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria const & src);
	AMateria & operator=(AMateria const & rhs);
	virtual ~AMateria();

	std::string const & getType() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif /* __AMATERIA_H__ */
