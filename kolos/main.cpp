// #include <iostream>
// #include <memory>
// using namespace std;

// class C{
//     int i_;
//     public:
//     inline static int count;
//     C(int i = {}): i_(i) {cout << "C(" <<i_<< ")\n"; count++;}
//     ~C() { cout << "~C(" << i_ << ")\n"; count--;}
// };

// int main(){
//     {cout << "Check1: \n";
//     {C c;}
//     C c;
//     }

//     {cout << "Check2: \n";
//     C c1(1);
//     C c2{2};
//     }

//     {cout<<"Check3: \n";
//     C c1();
//     C c2{2};

//     }

//     {cout<<"Check4: \n";
//     C c[1]{1};
//     }

//     {cout<<"Check 5: \n";
//     C *c = new C(5);
//     { C *c = new C();}
//     delete c;
//     c = static_cast<C*>(malloc(sizeof(C)));
//     free(c);
//     }

//     {cout<<"Check 6: \n";
//     C *c = new C[3]{{2}, {1}};
//     c = nullptr;
//     delete c;
//     }

//     {cout<<"Check7:\n";
//     std::unique_ptr<C[]> c = std::make_unique<C[]>(3);


//     }
// }