#include "functions.h"
#include "vector.h"

std::ostream& operator<<(std::ostream& stream, const Vector& v1){
    return stream << "[" << v1.x() << "," << v1.y() << "]";
}

Vector multiply(const double& v, const Vector& v1){
    return (v1.multiply(v));
}