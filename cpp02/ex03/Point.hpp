#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"


class Point {
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point();
        Point( const float, const float);
        ~Point();
        Point(Point const &);
        float   getValueX( void ) const;
        float   getValueY( void ) const;
        Point& operator=(Point const&);

};

float	Triangle_area(Point const& P1, Point const& P2, Point const& P3);
bool    CheckPoint(Point const& P1, Point const& P2, Point const& P3, Point const& Point);

#endif