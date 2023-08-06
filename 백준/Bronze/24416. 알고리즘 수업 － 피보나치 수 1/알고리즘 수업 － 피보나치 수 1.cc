#include <iostream>
#define MAX 40
using namespace std;

int N;
int cnt1, cnt2;

int fib(int n) {
    if (n == 1 || n == 2){
        ++cnt1;
        return 1;  // 코드1
    }
    else return (fib(n - 1) + fib(n - 2));
}

int f[MAX];
int fibonacci(int n) {
    f[1]=1;
    f[2] = 1;
    for (int i = 3; i<=n;++i){
        ++cnt2;
        f[i] <- f[i - 1] + f[i - 2];  // 코드2
    }
    return f[n];
}

int main(){
    cin >> N;
    fib(N);
    fibonacci(N);
    cout << cnt1 << ' ' << cnt2;
}