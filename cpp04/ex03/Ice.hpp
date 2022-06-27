/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 17:58:45 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/05 19:22:16 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_H__
#define __ICE_H__

#include "AMateria.hpp"

class Ice : public AMateria {
public:
	Ice();
	Ice(Ice const & src);
	Ice & operator=(Ice const & rhs);
	~Ice();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif /* __ICE_H__ */
