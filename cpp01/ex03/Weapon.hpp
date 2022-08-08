#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <string>

class Weapon {
	private:
		std::string type;
	public:
		Weapon( std::string str );
		Weapon ( void );
		~Weapon ( void );
		void		setType( std::string str ){
			type = str;
		};
		std::string	getType( void ) {
			return (type);
		};
};

#endif