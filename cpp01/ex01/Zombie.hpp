 #ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie {
	private:
		std::string zombie_name;
	public:
		Zombie(void);
		~Zombie(void);
		void	announce( void );
		void	setName(std::string name);
		std::string getName( void );
};

Zombie* zombieHorde( int, std::string );

#endif