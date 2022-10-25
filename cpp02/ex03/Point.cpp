#include "Point.hpp"

Point::Point( void ) : x(0) , y(0){}

Point::Point( const float a, const float b): x(a), y(b){}

Point::~Point( void ) {}

float   Point::getValueX( void ) const {
    return (x.toFloat());
}

float   Point::getValueY( void ) const {
    return (y.toFloat());
}