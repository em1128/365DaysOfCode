#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N,K;
    cin >> N >> K;
    vector<int> coins(N);

    for(int i=0;i<N;++i){
        cin >> coins[i];
    }
    int coinNum=0;
    for(int i=N-1;i>=0;--i){
        while(coins[i]<=K){
            K-=coins[i];
            coinNum++;
            //cout << "added unit of coin  : " << coins[i] << " number of all coins : " << coinNum << '\n';
        }
    }
    cout << coinNum;
}