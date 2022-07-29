#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];
	public:
		PhoneBook(void);
		~PhoneBook(void);
};

#endif