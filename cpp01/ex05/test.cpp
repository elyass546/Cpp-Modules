#include "Harl.hpp"
void	Print2( void ) {
	std::cout << "print test 2" << std::endl;
}

void	Print1( void ) {
	std::cout << "print test 1" << std::endl;
}

int main()
{
	typedef void(*PointerToFunc[])();
    PointerToFunc test = {Print1, Print2};
	for(int i = 0; i < 2; i++) {
		test[i]();
	}
    return 0;
}