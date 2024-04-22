#pragma once
#include <iostream>

class GeoFigure{
public:
    virtual double perimeter()const = 0;
    virtual double surfaceArea()const = 0;
    virtual ~GeoFigure(){}
};