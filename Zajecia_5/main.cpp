#include <iostream>
#include "FG.h"
#include "rectangle.h"
#include "circle.h"
#include "square.h"
#include "functions.h"


using Shape=GeoFigure;

void print(const Shape& s)
{
    std::cout << "Perimeter: " << s.perimeter() << "\nSurface area: " << s.surfaceArea() << std::endl;
}
 
int main()
{
    std::cout << "#### Test 1 ####" << std::endl;
    {
        //Shape shape;
        const Circle circle(3);
        const Square square(5);
        const Rectangle rectangle(3.5, 4);
 
        const Shape& r = circle;
        const Shape* w = &square;
        w = &rectangle;
 
        print(circle);
        print(square);
        print(rectangle);
 
        std::cout << std::endl;
        print(r);
        print(*w);
        std::cout<<circle<<std::endl;
        std::cout<<square<<std::endl;
        std::cout<<rectangle<<std::endl;
        std::cout<<r<<std::endl;
    }
 
    return 0;
}