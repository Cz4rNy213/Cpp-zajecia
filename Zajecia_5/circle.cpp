
#include "circle.h"
#include <numbers>

Circle::Circle(): radius(0){}
Circle::Circle(double radius_n): radius(radius_n){}

double Circle::perimeter()const{
    return (2 * 3.14 * radius);
}

double Circle::surfaceArea()const{
    return (3.14 * radius * radius);
}