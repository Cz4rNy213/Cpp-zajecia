// #include <iostream>
// #include <memory>
// using namespace std;

// class A{
//     public:
//     ~A(){ cout<<"~A\n";}
//     void f1()const{
//         cout<<"A::f1()\n";
//     }
//     virtual void f2() const{
//         cout<<"A::f2()\n";
//     }

// };

// class B: public A{
//     public:
//     ~B() { cout << "~B\n";}
//     void f1() const {
//         cout <<"B:f1()\n";
//     }
//     void f2() const {
//         cout << "B::f2()\n";
//     }
// };

// void func(const A& obj){
//     obj.f1();
//     obj.f2();
// }

// int main(){
//     {cout << "Check1: \n";
//     B d;
//     A b;
//     func(d);
//     func(b);
//     }

//     {cout << "Check2: \n";
//     A* ptr = new B;
//     ptr->f1();
//     ptr->f2();
//     delete ptr;
//     }

//     {cout<<"Check3: \n";
//     // A b = B();
//     b.f2();
//     b.f1();

//     }

//     {cout<<"Check4: \n";
//     std::unique_ptr<B> a(new B);
//     }

// }