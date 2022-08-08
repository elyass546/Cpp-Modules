#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];

	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	Search(void);
		void	Search_helper(std::string);
		void	preprint(void);
		int		print(int);
		int		my_atoi(std::string);
		int		add(std::string, int);

};

#endif