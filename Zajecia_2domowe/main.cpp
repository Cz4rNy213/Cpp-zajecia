#include <iostream>
#include "vector.h"
#include "functions.h"

int main(){
    const Vector v1(1.0, 2.0);
    const Vector v3(1.0, 2.0);
    const Vector v2;
    auto res1 = v1.add(v3);
    res1.print();
    auto res2 = v1.minus(v3);
    res2.print();
    auto res3 = v1.multiply(3.0);
    res3.print();
    (v1+v2).print();
    std::cout << v1 << std::endl;
    auto res4 = multiply(4.0, v3);
    res4.print();
    return 0;
}