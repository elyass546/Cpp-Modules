#ifndef FILE_HPP
#define FILE_HPP
#include <iostream>

class Contact{
	protected :
		int j;
};

class PhoneBook : public Contact{
	private:
		int hey;
	public:
		void salam(int i){
			hey = i;
			j = hey * 2;
		}
		void print(void){
			std::cout << hey + 234 << std::endl;
			std::cout << j + 234 << std::endl;
		}
};

#endif