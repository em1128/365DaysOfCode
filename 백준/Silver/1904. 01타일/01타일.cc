#include <iostream>
#define MAX 1000000
using namespace std;

int N;
int f[MAX];
int fibonacci(int n) {
    f[1]=1;
    f[2] = 2; // 피보나치랑 다른 점
    for (int i = 3; i<=n;++i){
        f[i] = (f[i - 1] + f[i - 2])%15746;  
    }
    return f[n];
}
int main(){
    cin >> N;
    cout << fibonacci(N);
}