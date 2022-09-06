#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {};

PhoneBook::~PhoneBook( void ) {};

int PhoneBook::add(std::string str, int count) {

	std::cout << "enter FirstName : ";
	getline(std::cin, str);
	if (str == "\0")
	{
		std::cout << "ghalat am3ala\n";
		return (-1);
	}
	this->contacts[count].setFirstName(str);

	std::cout << "enter LastName : ";	
	getline(std::cin, str);
	if (str == "\0")
	{
		this->contacts[count].setFirstName("");
		std::cout << "ghalat am3ala\n";
		return (-1);
	}
	this->contacts[count].setLastName(str);

	std::cout << "enter Nickname : ";
	getline(std::cin, str);
	if (str == "\0")
	{
		this->contacts[count].setFirstName("");
		this->contacts[count].setLastName("");
		std::cout << "ghalat am3ala\n";
		return (-1);
	}
	this->contacts[count].setNickname(str);

	std::cout << "enter DarkestSecret : ";
	getline(std::cin, str);
	if (str == "\0")
	{
		this->contacts[count].setFirstName("");
		this->contacts[count].setLastName("");
		this->contacts[count].setNickname("");
		std::cout << "ghalat am3ala\n";
		return (-1);
	}
	this->contacts[count].setDarkestSecret(str);

	std::cout << "enter PhoneNumber : ";
	getline(std::cin, str);
	if (str == "\0")
	{
		this->contacts[count].setFirstName("");
		this->contacts[count].setLastName("");
		this->contacts[count].setNickname("");
		this->contacts[count].setDarkestSecret("");
		std::cout << "ghalat am3ala\n";
		return (-1);
	}
	this->contacts[count].setPhoneNumber(str);
	return (0);
};

int	PhoneBook::print(int a){
	a--;
	if (this->contacts[a].getFirstName().empty())
	{
		std::cout << "This contact is empty :(" << std::endl << "Try again with another index" << std::endl;
		return (1);
	}
	std::cout << "Firstname      : " << this->contacts[a].getFirstName() << std::endl;
	std::cout << "Lastname       : " << this->contacts[a].getLastName() << std::endl;
	std::cout << "Nickname       : " << this->contacts[a].getNickname() << std::endl;
	std::cout << "Darkestsecret  : " << this->contacts[a].getDarkestSecret() << std::endl;
	std::cout << "Phonenumber    : " << this->contacts[a].getPhoneNumber() << std::endl;
	return (0);
};

void	PhoneBook::preprint(void) {
	std::cout.flags ( std::ios::right);
	std::cout << std::setw(10) << "index" << '|';
	std::cout << std::setw(10) << "Firstname" << '|';
	std::cout << std::setw(10) << "Lastname" << '|';
	std::cout << std::setw(10) << "Nickname\n";
};

void	PhoneBook::Search_helper(std::string s){
	std::string str;
	str = s;
	if (str.length() > 10){
		str = str.substr(0,10);
		str[9] = '.';
	}
	std::cout << std::setw(10) << str;
};

void	PhoneBook::Search(void){
	int a = 0;

	while (a < 8)
	{
		if (this->contacts[a].getFirstName().empty())
			break;
		std::cout << std::setw(10) << a + 1 << '|';
		Search_helper(this->contacts[a].getFirstName());
		if (this->contacts[a].getLastName().empty())
			break;
		std::cout << '|';
		Search_helper(this->contacts[a].getLastName());
		if (this->contacts[a].getNickname().empty())
			break;
		std::cout << '|';
		Search_helper(this->contacts[a].getNickname());
		std::cout << std::endl;
		a++;
	}
	
};
