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
		void		setFirstName( std::string name);
		void		setLastName( std::string name);
		void		setPhoneNumber( std::string name);
		void		setNickname( std::string name);
		void		setDarkestSecret( std::string name);
		std::string	getNickname( void );
		std::string	getLastName( void );
		std::string	getDarkestSecret( void );
		std::string	getFirstName( void );
		std::string	getPhoneNumber( void );
		Contact (void);
		~Contact (void);
};

#endif