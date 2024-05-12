#include <iostream>

namespace NS{
    class A{
        int value;
        public:
        A(int val): value(val) {}
        A operator+(const A& other) const{
            return A(this->value + other.value);
        }
        A operator*(const A& other)const{
            return A(this->value * other.value);
        }
        A& operator=(const A& other){
            this->value = 2* other.value;
            return *this;
        }
        A& operator+=(const A& other){
            value += other.value;
            return *this;
        }
        friend std::ostream& operator<<(std::ostream& os, const A& obj){
            return os << "A(" << obj.value << ")";
        }
    };
    auto f(A a, A b){
        return a * b;
    }
}
auto f(NS::A a, NS::A b){
    return a + b;
}

template<size_t N> void printArray(int (&numbers)[N]){
    for (const auto& num : numbers)
        std::cout << " " << num;
    std::cout<<std::endl;
}

int main(){
    std::cout << f(3,4) << "\n";
    int arr[] = {1,2,3,4};
    *(arr + 2) = 2 * (*(arr + 1));
    printArray(arr);
    auto &ref = arr[3];
    ref = arr[0];
    auto &&ref2 = std::move(arr[2]);
    printArray(arr);
    using namespace NS;
    A obj1(5), obj2(10), obj3(11);
    A obj4 = obj1 * obj2;
    obj2 = obj3;
    obj1 + obj3;
    obj2 += obj3;
    std::cout << obj1 << std::endl;
    std::cout << obj2 << std::endl;
    std::cout << obj3 << std::endl;
    std::cout << obj4 << std::endl;
}