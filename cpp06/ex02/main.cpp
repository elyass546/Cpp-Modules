#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate( void ){
    Base a;
    srand(time(NULL));
    int r = rand();
    if (r % 3 == 0)
        return (reinterpret_cast<A*>(&a));
    else if (r % 3 == 1)
        return (reinterpret_cast<B*>(&a));
    return (reinterpret_cast<C*>(&a));
};

void    identify(base* p) {
    
};


int main() {
    
}