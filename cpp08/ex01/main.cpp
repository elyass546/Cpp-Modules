#include "Span.hpp"

int main()
{
    try{
        std::vector<int>    myvector;
        srand(time(NULL));
        for (int i = 0; i < 10000; i++)
            myvector.push_back(rand());
        Span sp = Span(100000);
        sp.addNumber(myvector.begin(), myvector.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e){
         std::cout << e.what() << std::endl;
    }
}
    