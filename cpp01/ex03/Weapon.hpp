#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <string>

class Weapon {
	private:
		std::string type;
	public:
		Weapon( std::string str );
		~Weapon ( void );
		void		setType( std::string str );
		std::string	getType( void );
};

#endif