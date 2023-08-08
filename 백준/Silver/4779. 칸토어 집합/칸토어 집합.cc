#include <iostream>
#include <cmath>
using namespace std;
//https://beginnerdeveloper-lit.tistory.com/141
int N;

void makeCantor(int n){
    int size = pow(3, n-1);
    if(n==0){
        cout << '-';
        return;
    }

    makeCantor(n-1);
    for(int i=0;i<size;++i){
        cout << ' ';
    }
    makeCantor(n-1);
}

int main(){
    while(cin >> N){
        makeCantor(N);
        cout << '\n';
    }
}