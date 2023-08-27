#include <iostream>
#include <vector>
using namespace std;
int N, M;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    vector<int> acc(N+1);
    acc[0]=0;
    for(int i=1;i<=N;++i){
        int a;
        cin >> a;
        acc[i]=acc[i-1]+a;
    }
    for(int j=0;j<M;++j){
        int start, finish;
        cin >> start >> finish;
        cout << acc[finish] - acc[start-1]<< '\n';
    }

}