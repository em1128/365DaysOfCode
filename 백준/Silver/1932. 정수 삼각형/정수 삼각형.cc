#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<vector<int>> layers;
vector<vector<int>> sums;

int N;

int main(){
    ios::sync_with_stdio(false);
    cin.tie();
    
    cin >> N;
    layers.assign(N,vector<int>(N));
    sums.assign(N,vector<int>(N));
    
    int res=0;
    for(int i=0;i<N;++i){
        for(int j=0;j<=i;++j){
            cin >> layers[N-1-i][j]; // 층수를 뒤집음.
        }
    }
    
    sums[0]=layers[0];
    
    for(int i=1;i<N;++i){
        for(int j=0;j<N-i;++j){
            sums[i][j] = max((sums[i-1][j]+layers[i][j]),(sums[i-1][j+1]+layers[i][j]));
        }
    }
    cout << sums[N-1][0];
}