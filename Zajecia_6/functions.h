#pragma once
#include "vector2d.h"
#include <iostream>

std::ostream& operator<<(std::ostream& stream, const Vector2D& v);
Vector2D multiply(const double& v, const Vector2D& v1);
Vector2D operator*(const double& v, const Vector2D& v1);