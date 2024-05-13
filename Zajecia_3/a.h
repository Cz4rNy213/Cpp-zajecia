#pragma once
#include <iostream>

class A{
    public:
    A(){std::cout<<"Constructor"<<std::endl;}
    ~A(){std::cout<<"Destructor"<<std::endl;}
};