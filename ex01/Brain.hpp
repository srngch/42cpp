/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 21:09:16 by sarchoi           #+#    #+#             */
/*   Updated: 2022/06/04 23:19:00 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_H__
#define __BRAIN_H__

#include <string>

#define IDEAS_LENGTH 100

class Brain {
private:
	std::string ideas[IDEAS_LENGTH];

public:
	Brain();
	Brain(Brain const & src);
	Brain & operator=(Brain const & rhs);
	~Brain();

	std::string getIdea(size_t index) const;
	void setIdea(size_t index, std::string idea);
};

#endif /* __BRAIN_H__ */
