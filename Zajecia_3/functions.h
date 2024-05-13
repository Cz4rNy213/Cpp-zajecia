#pragma once

#include "dynam_array.h"
template<typename T>
std::ostream& operator<<(std::ostream& stream, const DynamArray<T>& array);

template<typename T>
std::ostream& operator<<(std::ostream& stream, const DynamArray<T>& array){
    for (u_int i = 0; i < array.size(); i++){
        stream << array.get(i) << ",";
    }
    return stream;    
}