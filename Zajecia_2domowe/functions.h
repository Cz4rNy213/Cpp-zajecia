#pragma once
#include "vector.h"
#include <iostream>

std::ostream& operator<<(std::ostream& stream, const Vector& v);
Vector multiply(const double& v, const Vector& v1);
Vector operator*(const double& v, const Vector& v1);