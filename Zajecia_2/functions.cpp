#include "functions.h"

ComplexNumber operator+(const double& v, const ComplexNumber& cn){
    return (cn + v);
}

std::ostream& operator<<(std::ostream& stream, const ComplexNumber& cn){
    return stream << cn.re() << " + " << cn.im() << "i";
}