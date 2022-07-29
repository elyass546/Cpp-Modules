#include  "Contact.hpp"

Contact::Contact ( void )  {

	this->i = 42;
	std::cout << "Constructor Called" << std::endl ;
}

Contact::setFirstName(std::string name) {

	this->i = name;
	std::cout << this->i << std::endl;
}
