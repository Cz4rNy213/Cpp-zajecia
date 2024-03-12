#include "vector.h"
#include <iostream>

Vector::Vector() : x_(0.), y_(0.){}

Vector::Vector(double x, double y) : x_(x), y_(y){}

Vector Vector::multiply(const double& v)const{
    return {x_ * v, y_ * v};
}

Vector Vector::add(const Vector& v2)const{
    return {x_ + v2.x_, y_ + v2.y_};
}

Vector Vector::minus(const Vector& v2)const{
    return {x_ - v2.x_, y_ - v2.y_};
}

Vector Vector::operator+(const Vector& v2)const{
    return Vector::add(v2);
}

Vector Vector::operator-(const Vector& v2)const{
    return Vector::minus(v2);
}

Vector Vector::operator-()const{
    return {-x_, -y_ };
}

void Vector::print()const{
    std::cout << "[" << x() << "," << y() << "]" << std::endl;
}

void Vector::x(double x){
    x_ = x;
}
double Vector::x()const{
    return x_;
}
void Vector::y(double y){
    y_ = y;
}
double Vector::y()const{
    return y_;
}
