#include "ComplexNumber.h"
#include <iostream>

ComplexNumber::ComplexNumber() : re_(0.), im_(0.){}

ComplexNumber::ComplexNumber(double re, double im) : re_(re), im_(im){}

ComplexNumber ComplexNumber::add(const ComplexNumber& cn2)const{
    // ComplexNumber result(re_ + cn2.re_, im_ + cn2.im_);
    // return result;

    return {re_ + cn2.re_, im_ + cn2.im_};
}

ComplexNumber ComplexNumber::add(const double& v)const{
    // ComplexNumber result(re_ + cn2.re_, im_ + cn2.im_);
    // return result;

    return {re_ + v, im_};
}

ComplexNumber ComplexNumber::minus(const ComplexNumber& cn2)const{
    // ComplexNumber result(re_ + cn2.re_, im_ + cn2.im_);
    // return result;

    return {re_ - cn2.re_, im_ - cn2.im_};
}

ComplexNumber ComplexNumber::minus(const double& v)const{
    // ComplexNumber result(re_ + cn2.re_, im_ + cn2.im_);
    // return result;

    return {re_ - v, im_};
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& cn2)const{
    // ComplexNumber result(re_ + cn2.re_, im_ + cn2.im_);
    // return result;

    return ComplexNumber::add(cn2);
}

ComplexNumber ComplexNumber::operator+(const double& v)const{
    // ComplexNumber result(re_ + cn2.re_, im_ + cn2.im_);
    // return result;

    return ComplexNumber::add(v);
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber& cn2)const{
    // ComplexNumber result(re_ + cn2.re_, im_ + cn2.im_);
    // return result;

    return ComplexNumber::minus(cn2);
}

ComplexNumber ComplexNumber::operator-(const double& v)const{
    // ComplexNumber result(re_ + cn2.re_, im_ + cn2.im_);
    // return result;

    return ComplexNumber::minus(v);
}

ComplexNumber ComplexNumber::operator-()const{
    // ComplexNumber result(re_ + cn2.re_, im_ + cn2.im_);
    // return result;

    return {-re_, -im_ };
}

void ComplexNumber::print()const{
    std::cout << re() << ", " << im() << std::endl;
}

void ComplexNumber::re(double r){
    re_ = r;
}
double ComplexNumber::re()const{
    return re_;
}
void ComplexNumber::im(double i){
    im_ = i;
}
double ComplexNumber::im()const{
    return im_;
}
