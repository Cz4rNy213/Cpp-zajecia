#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <algorithm>

using namespace std;

void ForEach(const std::vector<int>& values, void(*func)(int)){
    for (int value : values){
        func(value);
    }
}

int main(){
    std::vector<int> values = {1, 5, 4, 7, 2, 3};
    auto lambda =  [](int value) { cout << "Value: " << value << endl;};
    ForEach(values,lambda);
    auto it = std::find_if(values.begin(), values.end(), [](int value){ return value > 3 ;});
    
    cout << *it << endl;
    return 0;
}






















// class A {
// public:
//     A() { cout << "Constructing A\n"; }

//     ~A() { cout << "Destructing A\n"; }
// };

// class B : virtual public A{
// public: 
//      B() { cout << "Constructing B\n"; }

//     ~B() { cout << "Destructing B\n"; }
// };

// class C : virtual public A{
// public:
//      C() { cout << "Constructing C\n"; }

//     ~C() { cout << "Destructing C\n"; }
// };

// class D : public B, public C{
//     public:
//      D() { cout << "Constructing D\n"; }

//     ~D() { cout << "Destructing D\n"; }
// };


// int main(){
//     D d;

//     return 0;
// }















// class Entity{
//     public:
//     Entity(){
//         std::cout << "Created Entity!" << std::endl;
//     }
//     ~Entity(){
//         std::cout << "Destroyed Entity!" << std::endl;
//     }

//     void Print(){

//     }
// };

// int main(){

//     {
//         std::unique_ptr<Entity> entity = std::make_unique<Entity>();
        
//         std::shared_ptr<Entity> sharedfEntity = std::make_shared<Entity>();
//         std::shared_ptr<Entity> sharedEntity2 = std::make_shared<Entity>();

//         std::unique_ptr<int> ptr1 = std::make_unique<int>(25);
//         std::unique_ptr<int> ptr2 = std::move(ptr1);
//         std::cout << *ptr2 << std::endl;
//         entity->Print();
//     }
//     return 0;
// }