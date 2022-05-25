/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:29:27 by sarchoi           #+#    #+#             */
/*   Updated: 2022/05/25 22:48:10 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

#define MAX_CONTACT 8
#define MAX_FIELD_LEN 10

#include "Contact.hpp"

class PhoneBook {
private:
	Contact contacts[MAX_CONTACT];
	int index;

public:
	PhoneBook(void);

	void	start(void) const;
	void	add(void);
	void	search(void) const;
};

#endif /* __PHONEBOOK_H__ */
