#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class Contact {
	private :
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	darkest_secret;
		std::string	phone_number;
	public :
		std::string	i;
		void	setFirstName( std::string name);
		std::string	getFirstName( void );
		Contact (void);
		~Contact (void);
};

#endif