
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	index = 0;
}

void	PhoneBook::start(void) const
{
	std::cout << "Welcome to the phonebook!" << std::endl;
	std::cout << "Here are commands you can use:" << std::endl;
	std::cout << "  - ADD: add a contact" << std::endl;
	std::cout << "  - SEARCH: search a contact" << std::endl;
	std::cout << "  - EXIT: exit the phonebook" << std::endl;
}

void	PhoneBook::add(void)
{
	std::string input[5];

	if (index == MAX_CONTACT)
		index = 0;
	std::cout << "Add Contact" << std::endl;
	std::cout << "  - First Name > ";
	getline(std::cin, input[0]);
	std::cout << "  - Last Name > ";
	getline(std::cin, input[1]);
	std::cout << "  - Nickname > ";
	getline(std::cin, input[2]);
	std::cout << "  - Phone Number > ";
	getline(std::cin, input[3]);
	std::cout << "  - Darkest Secret > ";
	getline(std::cin, input[4]);
	if (input[0] == "" || input[1] == "" || input[2] == "" || input[3] == "" || input[4] == "")
	{
		std::cerr << "<error> All fields must be filled in." << std::endl;
		return ;
	}
	contacts[index] = Contact(index, input[0], input[1], input[2], input[3], input[4]);
	std::cout << "  -> Contact added! index: " << index << std::endl;
	index++;
}

void	PhoneBook::search(void) const
{
	std::string	input;

	if (index == 0)
	{
		std::cout << "Phonebook is empty!" << std::endl;
		return ;
	}
	std::cout << std::setw(MAX_FIELD_LEN) << "index" << "|";
	std::cout << std::setw(MAX_FIELD_LEN) << "first name" << "|";
	std::cout << std::setw(MAX_FIELD_LEN) << "last name" << "|";
	std::cout << std::setw(MAX_FIELD_LEN) << "nickname" << std::endl;
	for (int i = 0; i < MAX_CONTACT; i++)
	{
		if (contacts[i].get_index() != -1)
			contacts[i].print_list();
	}
	std::cout << "Select a contact index to search: ";
	getline(std::cin, input);
	if (input.length() > 1 \
		|| (input[0] < '0' || MAX_CONTACT <= input[0] - '0') \
		|| (contacts[input[0] - '0'].get_index() == -1))
	{
		std::cerr << "<error> Invalid input." << std::endl;
		return ;
	}
	if (contacts[input[0] - '0'].get_index() == -1)
	{
		std::cerr << "<error> Contact not found." << std::endl;
		return ;
	}
	contacts[input[0] - '0'].print_contact();
}
