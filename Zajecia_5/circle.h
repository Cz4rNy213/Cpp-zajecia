#pragma once
#include <iostream>
#include "FG.h"

class Circle : public GeoFigure{
protected:
    double radius;
public:
    Circle();
    Circle(double radius);
    double perimeter()const override;
    double surfaceArea()const override;
    virtual ~Circle(){}
};