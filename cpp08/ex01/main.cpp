#include "Span.hpp"

int main() {
    try{
        Span Hello(5);
        Hello.addNumber(1);
        Hello.addNumber(345);
        Hello.addNumber(3);
        Hello.addNumber(490);
        Hello.addNumber(-5);
        // std::cout << "longest Span : " << Hello.longestSpan() << std::endl;
        Hello.shortestSpan();
    }
    catch(std::exception& e){
        std::cout << e.what() << std::endl;
    }
}
    