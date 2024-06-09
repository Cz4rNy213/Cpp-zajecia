#include "functions.h"
#include "vector2d.h"

std::ostream& operator<<(std::ostream& stream, const Vector2D& v1){
    return stream << "[" << v1.x() << "," << v1.y() << "]";
}

Vector2D multiply(const double& v, const Vector2D& v1){
    return (v1.multiply(v));
}

Vector2D operator*(const double& v, const Vector2D& v1){
    return (v1.multiply(v));
}