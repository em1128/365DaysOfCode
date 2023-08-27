#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<int> persons(N);
    for(int i=0;i<N;++i){
        cin >> persons[i];
    }
    sort(persons.begin(),persons.end());
    vector<int> spentTime(N+1);
    spentTime[0]=0;
    int sum=0;
    for(int i=0;i<N;++i){
        spentTime[i+1]=spentTime[i]+persons[i];
        sum+=spentTime[i+1];
    }
    cout << sum;
}