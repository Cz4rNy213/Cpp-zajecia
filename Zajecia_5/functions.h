#pragma once

#include "circle.h"
#include "rectangle.h"
#include "square.h"
#include "FG.h"

std::ostream& operator<<(std::ostream& stream, const GeoFigure& figure);
std::ostream& operator<<(std::ostream& stream, const Rectangle& figure);
std::ostream& operator<<(std::ostream& stream, const Circle& figure);
std::ostream& operator<<(std::ostream& stream, const Square& figure);
