#include<iostream>
 
class Base{
    public:
        virtual void show() = 0;
};
 
class Derived: public Base{
    public:
        void show() { std::cout << "In Derived \n"; }
};
 
int main(void)
{
    Base *bp = new Derived();
    bp->show();
    return 0;
}