#include <iostream>
#include "dynam_array.h"

DynamArray::DynamArray(u_int array_size): array_(new double[array_size]), size_(array_size){}

DynamArray::DynamArray(u_int array_size, double init_value): array_(new double[array_size]), size_(array_size){
    for (size_t i = 0; i < size_; ++i) {
        array_[i] = init_value;
    }
}
    
DynamArray::DynamArray(const DynamArray& other) : size_(other.size_), array_(new double[other.size_]) {
    for (size_t i = 0; i < other.size_; ++i) {
        array_[i] = other.array_[i];
    }
}

DynamArray::DynamArray(DynamArray&& other) : size_(other.size_), array_(other.array_) {
    other.array_ = nullptr;
}

DynamArray::~DynamArray(){delete[] array_;}



DynamArray& DynamArray::operator=(const DynamArray& other){
    if (this != &other){
        size_ = other.size_;
        delete[] array_;
        array_ = new double[size_];
        for (size_t i = 0; i < size_; ++i) {
            array_[i] = other.array_[i];
        }
    }
    return *this;
}

DynamArray& DynamArray::operator=(DynamArray&& other){
    if (this != &other){
        size_ = other.size_;
        delete[] array_;
        array_ = other.array_;
        other.array_ = nullptr;
    }
    return *this;
}

double& DynamArray::operator[](u_int index){
    return setGet(index);
}

const double& DynamArray::operator[](u_int index)const{
    return setGet(index);
}

double& DynamArray::setGet(u_int index){
    return array_[index];
}

const double& DynamArray::setGet(u_int index)const{
    return array_[index];
}

double DynamArray::get(u_int index)const{
    return array_[index];
}

DynamArray& DynamArray::set(u_int index, double value){
    array_[index] = value;
    return *this;
}

u_int DynamArray::size()const{
    return size_;
}

