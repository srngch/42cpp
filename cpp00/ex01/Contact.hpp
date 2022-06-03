/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:29:30 by sarchoi           #+#    #+#             */
/*   Updated: 2022/05/25 22:46:09 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACK_H__
#define __CONTACK_H__

#define MAX_FIELD_LEN 10

class Contact {
private:
	int index;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	const std::string truncate_text(std::string text) const;

public:
	Contact();
	Contact(int index, std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);

	int get_index() const;
	void print_list() const;
	void print_contact() const;
};

#endif /* __CONTACK_H__ */
