#pragma once
#include <iostream>
#include "rectangle.h"

class Square : public Rectangle{
public:
    Square() : Rectangle(){}
    Square(double a) : Rectangle(a, a){}
    virtual ~Square(){}
};