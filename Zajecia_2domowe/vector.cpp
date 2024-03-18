#include "vector.h"
#include <iostream>
#include <math.h>

double Vector::prec_;

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

void Vector::multiplyV(const double& v){
    x_ *= v;
    y_ *= v;
}

void Vector::addV(const Vector& v2){
    x_ += v2.x_;
    y_ += v2.y_;
}

void Vector::minusV(const Vector& v2){
    x_ -= v2.x_;
    y_ -= v2.y_;
}

double Vector::dot(const Vector& v2)const{
    return x_ * v2.x_ + y_ * v2.y_;
}

Vector Vector::perpendicular()const{
    return {-x_, y_};
}

double Vector::length()const{
    return sqrt(lengthSq());
}

double Vector::lengthSq()const{
    return pow(x_, 2) + pow(y_, 2);
}

Vector Vector::operator+(const Vector& v2)const{
    return Vector::add(v2);
}

Vector Vector::operator*(const double& v)const{
    return Vector::multiply(v);
}

Vector Vector::operator-(const Vector& v2)const{
    return Vector::minus(v2);
}

Vector Vector::operator-()const{
    return {-x_, -y_ };
}

Vector& Vector::operator-=(const Vector& v2){
    *this = *this - v2;
    return *this;
}

Vector& Vector::operator+=(const Vector& v2){
    *this = *this + v2;
    return *this;
}

Vector& Vector::operator*=(const double& v){
    *this = *this * v;
    return *this;
}

bool Vector::operator==(const Vector& v2)const{
    Vector res = this->minus(v2);
    return (res.length() <= prec_);
}

bool Vector::operator!=(const Vector& v2)const{
    Vector res = this->minus(v2);
    return !(res.length() <= prec_);
}

void Vector::compEpsilon(double v){
    prec_ = v;
}

void Vector::print()const{
    std::cout << "[" << x() << "," << y() << "]" << std::endl;
}

// void Vector::x(double x){
//     x_ = x;
// }
Vector& Vector::x(double x){
    x_ = x;
    return *this;
}
double Vector::x()const{
    return x_;
}
// void Vector::y(double y){
//     y_ = y;
// }
Vector& Vector::y(double y){
    y_ = y;
    return *this;
}
double Vector::y()const{
    return y_;
}

