/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:46:10 by sarchoi           #+#    #+#             */
/*   Updated: 2022/05/25 22:36:18 by sarchoi          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

Contact::Contact()
{
	index = -1;
	first_name = "";
	last_name = "";
	nickname = "";
	phone_number = "";
	darkest_secret = "";
}

Contact::Contact(int index, std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
	this->index = index;
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
}

const std::string Contact::truncate_text(std::string text) const
{
	if (text.length() > MAX_FIELD_LEN)
		return (text.substr(0, MAX_FIELD_LEN - 1) + ".");
	else
		return (text);
}

int Contact::get_index() const
{
	return (index);
}

void Contact::print_list() const
{
	std::cout << std::setw(MAX_FIELD_LEN) << std::to_string(index) << "|";
	std::cout << std::setw(MAX_FIELD_LEN) << truncate_text(first_name) << "|";
	std::cout << std::setw(MAX_FIELD_LEN) << truncate_text(last_name) << "|";
	std::cout << std::setw(MAX_FIELD_LEN) << truncate_text(nickname) << std::endl;
}

void Contact::print_contact() const
{
	std::cout << "  - First Name: " << first_name << std::endl;
	std::cout << "  - Last Name: " << last_name << std::endl;
	std::cout << "  - Nickname: " << nickname << std::endl;
	std::cout << "  - Phone Number: " << phone_number << std::endl;
	std::cout << "  - Darkest Secret: " << darkest_secret << std::endl;
}
