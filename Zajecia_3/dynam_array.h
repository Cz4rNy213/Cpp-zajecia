#pragma once
#include <iostream>

class DynamArray {
private:
    u_int size_;
    double* array_;

public:
    DynamArray(u_int array_size);
    DynamArray(u_int array_size, double init_value);
    DynamArray(const DynamArray& other);
    ~DynamArray();

    double& setGet(u_int index);
    const double& setGet(u_int index)const;
    DynamArray& operator=(const DynamArray& other);
    double operator[](u_int index);
    double& operator[](u_int index)const;
    double get(u_int index)const;
    DynamArray& set(u_int index, double value);
    u_int size()const;
};