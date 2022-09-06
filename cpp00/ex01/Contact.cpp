#include  "Contact.hpp"

Contact::Contact( void ){};

Contact::~Contact( void ){};

void	Contact::setFirstName( std::string name) {
	first_name = name;
};

void	Contact::setLastName( std::string name) {
	last_name = name;
};

void	Contact::setNickname( std::string name) {
	nickname = name;
};

void	Contact::setDarkestSecret( std::string name) {
	darkest_secret = name;
};

void	Contact::setPhoneNumber( std::string name) {
	phone_number = name;
};

std::string	Contact::getFirstName( void ) {
	return first_name;
};

std::string	Contact::getLastName( void ) {
	return last_name;
};

std::string	Contact::getNickname( void ) {
	return nickname;
};

std::string	Contact::getDarkestSecret( void ) {
	return darkest_secret;
};

std::string	Contact::getPhoneNumber( void ) {
	return phone_number;
};
