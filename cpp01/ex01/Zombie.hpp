 #ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie {
	std::string zombie_name;
	public:
		Zombie(void);
		~Zombie(void);
		void	announce( void );
		void	setName(std::string name) {
			zombie_name = name;
		};
		std::string getName( void ){
			return (zombie_name);
		};
};
Zombie* zombieHorde( int, std::string );
#endif