#pragma once
#include "zajecia2.h"
#include <iostream>

ComplexNumber operator+(const double& v, const ComplexNumber& cn);
std::ostream& operator<<(std::ostream& stream, const ComplexNumber& cn);