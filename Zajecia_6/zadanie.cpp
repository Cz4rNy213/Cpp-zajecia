#include <iostream>

using namespace std;

int ileDzielnikow(int a){
    int count = 0;
    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            count++;
        }
    }
    return count;
}
int main(){
    int done[10] = {4, 1, 13, 7, 9, 10, 20, 22, 5, 40};
    int tablica_dzielnikow[10] = {0};
    for (int i = 0; i < 10; i++){
        tablica_dzielnikow[i] = ileDzielnikow(done[i]);
    }
    int max_dzielnikow = 0;
    for (int i = 0; i < 10; i++){
        if (max_dzielnikow < tablica_dzielnikow[i]){
        max_dzielnikow = tablica_dzielnikow[i];
        }
    }
    for (int i = 0; i < 10; i++){
        if (tablica_dzielnikow[i] == max_dzielnikow){
            std::cout << "Liczba " << done[i] << " ma najwięcej dzielnikow" <<std::endl;
        }
    }
    return 0;
}