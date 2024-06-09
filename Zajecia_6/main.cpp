#include <vector>
#include <algorithm>
#include <iostream>
#include <functional>

using namespace std;

double fun(int a){
    return a * 2;
}

int main(){
    int a = 4;
    int b = 10;
    auto lambda = [&a](int i){
        ++a;
        return a * i;
    };
    a = 10;
    auto lambda2 = [&a](int i ) -> float { return a * i; }; //sprecyzowaliśmy ze lambda zwraca float
    std::cout << lambda(2) << ", " <<  lambda2(2) << std::endl;
    std:: cout << a << std::endl;

    std::function<double(int)> f = fun; //wskaźnik ktry mona przypisywać do lambdy, funkcja przyjmuje int i zwraca double
    std::function<int(int)> f2 = lambda2;
    std::function<int(int, int)> f3 = [](int i, int j){ return j * i;};

    vector<int> v= {2, 3, 5, 7, 10, 11, 6};
    auto it = std::remove_if(v.begin(), v.end(), [](const int &i){ return i < 5; }); 
    v.erase(it, v.end());
    for (int i = 0 ; i < v.size(); i++){
        std::cout<<v[i] << std::endl;
    }
    std::cout << std::endl;
    std::sort(v.begin(), v.end());
    for (int i = 0 ; i < v.size(); i++){
        std::cout<<v[i] << std::endl;
    }
    return 0;
}