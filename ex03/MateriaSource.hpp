/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 17:59:00 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/05 20:35:11 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_H__
#define __MATERIASOURCE_H__

#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

#define MATERIAS_SIZE 4
#define MAX_FIELD_LEN 10

class MateriaSource : public IMateriaSource {
private:
	AMateria* materias[MATERIAS_SIZE];

public:
	MateriaSource();
	MateriaSource(MateriaSource const & src);
	MateriaSource & operator=(MateriaSource const & rhs);
	~MateriaSource();

	virtual void learnMateria(AMateria* m);
	virtual AMateria* createMateria(std::string const & type);

	virtual void showMaterias() const;
};

#endif /* __MATERIASOURCE_H__ */
