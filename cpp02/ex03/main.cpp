#include "Point.hpp"

int main() {

	Point const P1(0, 0);
	Point const P2(20, 0);
	Point const P3(10, 30);
	Point const Point(10, 15);
	std::cout << std::boolalpha << CheckPoint(P1, P2, P3, Point);
    return (0);
}