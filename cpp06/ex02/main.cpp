#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate( void ){
    srand(time(NULL));

    if (rand() % 3 == 0)
       return (new A());
    else if (rand() % 3 == 1)
        return (new B());
    return (new C());
};

void    identify(Base* p) {
    A*  a;
    B*  b;
    C*  c;

    a = dynamic_cast<A*>(p);
    b = dynamic_cast<B*>(p);
    c = dynamic_cast<C*>(p);
    if (a)
        std::cout << "The actual type of this object is A" << std::endl;
    if (b)
        std::cout << "The actual type of this object is B" << std::endl;
    if (c)
        std::cout << "The actual type of this object is C" << std::endl;
};

void    identify(Base& p)
{
    try{
        A& a = dynamic_cast<A&>(p);
        std::cout << "The actual type of this object is A" << std::endl;
        (void)a;
        return ;
    }
    catch (std::exception &e){
        (void)e;
    }
// ********************************************************
    try{
        B& b = dynamic_cast<B&>(p);
        std::cout << "The actual type of this object is B" << std::endl;
        (void)b;
        return ;
    }
    catch (std::exception &e){
        (void)e;
    }
// ********************************************************
    try{
        C& c = dynamic_cast<C&>(p);
        std::cout << "The actual type of this object is C" << std::endl;
        (void)c;
        return ;
    }
    catch (std::exception &e){
        (void)e;
    }
}


int main() {
    A    _A;
    B    _B;
    C    _C;

    identify(&_A);
    identify(&_B);
    identify(&_C);

    std::cout << std::endl;
    identify(generate());
    std::cout << std::endl;
    identify(_A);
    identify(_B);
    identify(_C);
}