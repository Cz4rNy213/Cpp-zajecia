#include <iostream>
#include "functions.h"
#include "circle.h"
#include "rectangle.h"
#include "square.h"
#include "FG.h"

std::ostream& operator<<(std::ostream& stream, const GeoFigure& figure){
    stream <<"I am GeoFigure";
    return stream;    
}

std::ostream& operator<<(std::ostream& stream, const Rectangle& figure){
    stream <<"I am Rectangle";
    return stream;    
}

std::ostream& operator<<(std::ostream& stream, const Circle& figure){
    stream <<"I am Circle";
    return stream;    
}

std::ostream& operator<<(std::ostream& stream, const Square& figure){
    stream <<"I am Square";
    return stream;    
}