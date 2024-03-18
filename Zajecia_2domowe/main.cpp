#include <iostream>
#include "vector.h"
#include "functions.h"
using Vector2D = Vector;


int main()
{
    std::cout << "\n#### Test 3 ####" << std::endl;
    {
        Vector::compEpsilon(0.0001);
 
        const Vector2D v1(2, 3);
        const Vector2D v2(2.1, 3.1);
        const Vector2D v3 = (v2 - v1) * 0.001;
        const Vector2D v4;
 
        std::cout << "v4: " << v4 << std::endl;
 
        std::cout << "v3 == v4: " << std::boolalpha << (v3 == v4) << std::endl;
        std::cout << "v3 != v4: " << std::boolalpha << (v3 != v4) << std::endl;
 
        Vector::compEpsilon(0.01);
        std::cout << "v3 == v4: " << std::boolalpha << (v3 == v4) << std::endl;
        std::cout << "v3 != v4: " << std::boolalpha << (v3 != v4) << std::endl;
    }
 
    return 0;
}








// int main()
// {
//     std::cout << "\n#### Test 2 ####" << std::endl;
//     {
//         const Vector2D v1(2, 3);
//         Vector2D v2;
//         v2.x(2);
//         const Vector2D v3 = v1.add(v2);
 
//         Vector2D v4(1, 1);
//         v4 += v1;
//         v4 -= v2;
//         v4 += v3;
//         v4 *= 2;
 
//         std::cout << "v4: " << v4 << std::endl;
//     }
 
//     return 0;
// }





// int main()
// {
//     std::cout << "#### Test 1 ####" << std::endl;
//     {
//         const Vector2D v1(2, 3);
//         Vector2D v2;
//         v2.x(2);
//         const Vector2D v3 = v1.add(v2);
//         std::cout << "v3: " << v3 << std::endl;
 
//         std::cout << "v3*1.5: " << v3 * 1.5 << std::endl;
 
//         std::cout << "1.5*v3: " << 1.5 * v3 << std::endl;
 
//         std::cout << "v3-v1: " << v3 - v1 << std::endl;
 
//         std::cout << "v1 dot v2: " << v1.dot(v2) << std::endl;
 
//         std::cout << "v3 length squared: " << v3.lengthSq() << std::endl;
 
//         std::cout << "v3 length: " << v3.length() << std::endl;
 
//         std::cout << "v3 perp: " << v3.perpendicular() << std::endl;
 
//         v2.x(3).y(2);
//         std::cout << "v2: " << v2 << std::endl;
//     }

//     return 0;
// }
 










// int main(){
//     const Vector v1(1.0, 2.0);
//     const Vector v3(1.0, 2.0);
//     const Vector v2;
//     auto res1 = v1.add(v3);
//     res1.print();
//     auto res2 = v1.minus(v3);
//     res2.print();
//     auto res3 = v1.multiply(3.0);
//     res3.print();
//     (v1+v2).print();
//     std::cout << v1 << std::endl;
//     auto res4 = multiply(4.0, v3);
//     res4.print();
//     return 0;
// }