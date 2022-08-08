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
		void	setFirstName( std::string name) {
			first_name = name;
		};
		std::string	getFirstName( void ) {
			return first_name;
		};

		void	setLastName( std::string name) {
			last_name = name;
		};
		std::string	getLastName( void ) {
			return last_name;
		};

		void	setNickname( std::string name) {
			nickname = name;
		};
		std::string	getNickname( void ) {
			return nickname;
		};

		void	setDarkestSecret( std::string name) {
			darkest_secret = name;
		};
		std::string	getDarkestSecret( void ) {
			return darkest_secret;
		};

		void	setPhoneNumber( std::string name) {
			phone_number = name;
		};
		std::string	getPhoneNumber( void ) {
			return phone_number;
		};
		Contact (void);
		~Contact (void);
};

#endif