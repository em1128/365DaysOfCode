#include <iostream>
#include <vector>
using namespace std;
#define MAX 100000;
vector<int> cnt;



void cntTry(int n){
    cnt[2]=1;
    cnt[3]=1;
    for(int i=4;i<=n;++i){
        if(i%6==0){
            int a = cnt[i/3];
            int b = cnt[i/2];
            if(a <= b)
                cnt[i] = cnt[i/3] + 1;
            else
                cnt[i] = cnt[i/2] + 1;
            
        }else if(i%3==0){
            int a = cnt[i/3];
            int c = cnt[i-1];
            if(a <= c)
                cnt[i] = cnt[i/3] + 1;
            else
                cnt[i] = cnt[i-1] + 1;                 
        }else if(i%2==0){
            int b = cnt[i/2];
            int c = cnt[i-1];
            if(b <= c)
                cnt[i] = cnt[i/2] + 1;
            else
                cnt[i] = cnt[i-1] + 1; 
        }else{
            cnt[i] = cnt[i-1] + 1;
        }
    }

}

int main(){
    int N;
    cin >> N;
    cnt.assign(N+1,0);
    cntTry(N);
    cout << cnt[N];
}