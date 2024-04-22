#include "rectangle.h"

Rectangle::Rectangle(): height(0), width(0){}
Rectangle::Rectangle(double height_n, double width_n): height(height_n), width(width_n){}

double Rectangle::perimeter()const{
    return (2*height + 2*width);
}

double Rectangle::surfaceArea()const{
    return (height*width);
}