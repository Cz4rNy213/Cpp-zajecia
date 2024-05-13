#pragma once
#include <iostream>

template<typename T>
class DynamArray {
private:
    u_int size_;
    T* array_;

public:

    class Iterator{
        private:
        T* ptr_;

        public:
            Iterator(T* ptr) : ptr_(ptr) {}

            T& operator*() const { return *ptr_; }
            Iterator operator++() { ptr_++; return *this; }  
            Iterator operator++(int) { Iterator tmp = *this; ++(*this); return tmp; }
            friend bool operator== (const Iterator& a, const Iterator& b) { return a.ptr_ == b.ptr_; };
            friend bool operator!= (const Iterator& a, const Iterator& b) { return a.ptr_ != b.ptr_; };
    };

    Iterator begin() {
        return Iterator(array_);
    }

    Iterator end() {
        return Iterator(array_ + size_);
    }

    explicit DynamArray(){};
    DynamArray(u_int array_size);
    DynamArray(u_int array_size, const T& init_value);
    DynamArray(const DynamArray<T>& other);
    DynamArray(DynamArray<T>&& other);
    ~DynamArray();

    T& setGet(u_int index);
    const T& setGet(u_int index)const;
    DynamArray<T>& operator=(const DynamArray<T>& other);
    DynamArray<T>& operator=(DynamArray<T>&& other);
    T& operator[](u_int index);
    const T& operator[](u_int index)const;
    const T& get(u_int index)const;
    DynamArray<T>& set(u_int index, const T& value);
    u_int size()const;
    
};

template<typename T>
DynamArray<T>::DynamArray(u_int array_size): array_(new T[array_size]), size_(array_size){}

template<typename T>
DynamArray<T>::DynamArray(u_int array_size, const T& init_value): array_(new T[array_size]), size_(array_size){
    for (size_t i = 0; i < size_; ++i) {
        array_[i] = init_value;
    }
}
    
template<typename T>
DynamArray<T>::DynamArray(const DynamArray<T>& other) : size_(other.size_), array_(new T[other.size_]) {
    for (size_t i = 0; i < other.size_; ++i) {
        array_[i] = other.array_[i];
    }
}

template<typename T>
DynamArray<T>::DynamArray(DynamArray<T>&& other) : size_(other.size_), array_(other.array_) {
    other.array_ = nullptr;
}

template<typename T>
DynamArray<T>::~DynamArray(){delete[] array_;}


template<typename T>
DynamArray<T>& DynamArray<T>::operator=(const DynamArray<T>& other){
    if (this != &other){
        size_ = other.size_;
        delete[] array_;
        array_ = new T[size_];
        for (size_t i = 0; i < size_; ++i) {
            array_[i] = other.array_[i];
        }
    }
    return *this;
}

template<typename T>
DynamArray<T>& DynamArray<T>::operator=(DynamArray<T>&& other){
    if (this != &other){
        size_ = other.size_;
        delete[] array_;
        array_ = other.array_;
        other.array_ = nullptr;
    }
    return *this;
}

template<typename T>
T& DynamArray<T>::operator[](u_int index){
    return setGet(index);
}

template<typename T>
const T& DynamArray<T>::operator[](u_int index)const{
    return setGet(index);
}

template<typename T>
T& DynamArray<T>::setGet(u_int index){
    return array_[index];
}

template<typename T>
const T& DynamArray<T>::setGet(u_int index)const{
    return array_[index];
}

template<typename T>
const T& DynamArray<T>::get(u_int index)const{
    return array_[index];
}

template<typename T>
DynamArray<T>& DynamArray<T>::set(u_int index, const T& value){
    array_[index] = value;
    return *this;
}

template<typename T>
u_int DynamArray<T>::size()const{
    return size_;
}
