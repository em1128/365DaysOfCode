#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, v;
    cin >> N;

    vector<int> nums(N);
    for(int i=0;i<N;i++){
        cin >> nums.at(i);
    }
    cin >> v;
    int cnt = count(nums.begin(),nums.end(),v);
    cout << cnt;
}