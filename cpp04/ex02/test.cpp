#include <iostream>
 
class Base{
    public:
        virtual std::string show() = 0;
};
 
class Derived: public Base{
    public:
        std::string show() { return ("In Derived");}
};
 
int main(void)
{
    Base bp;
    std::cout << bp.show() << std::endl;
    return 0;
}
