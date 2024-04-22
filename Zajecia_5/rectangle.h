#pragma once
#include <iostream>
#include "FG.h"

class Rectangle : public GeoFigure{
protected:
    double height, width;
public:
    Rectangle();
    Rectangle(double height, double width);
    double perimeter()const override;
    double surfaceArea()const override;
    virtual ~Rectangle(){}
};