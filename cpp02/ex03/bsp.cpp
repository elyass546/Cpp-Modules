#include "Point.hpp"

float	Triangle_area(Point const &P1, Point const &P2, Point const& P3){
	float area;

	area = ((P1.getValueX() * (P2.getValueY() - P3.getValueY())) + (P2.getValueX() * (P3.getValueY() - P1.getValueY())) + (P3.getValueX() * (P1.getValueY() - P2.getValueY()))) / 2.0f;
	if (area < 0)
		area  = -area;
	return (roundf(area));
}

bool    CheckPoint(Point const& P1, Point const& P2, Point const& P3, Point const& Point) {
	float A;
	float A1;
	float A2;
	float A3;

	A = Triangle_area(P1, P2, P3);
	A1 = Triangle_area(Point, P2, P3);
	A2 = Triangle_area(P1, Point, P3);
	A3 = Triangle_area(P1, P2, Point);
	if (A == A1 + A2 + A3)
		return true;
	return false;
}