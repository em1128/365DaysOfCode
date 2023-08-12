#include <iostream>
#include <vector>
#define MAX 10
using namespace std;
int N;
vector<int> nums;
vector<int> calcs(4,0);

int r_max=-1000000000;
int r_min=1000000000;
vector<int> visited(4,0);

int simple_calc(int m, int n1, int n2){
    if(m==0) return n1+n2;
    else if(m==1) return n1-n2;
    else if(m==2) return n1*n2;
    else if(m==3) return n1/n2;
    else {
        cout << "calculation fail\n";
        return 0;
    }
    
}
void sort_calcs(int* res, int level){
    
    if(level==(N)){
        if(r_max<res[level-1]) r_max=res[level-1];
        if(r_min>res[level-1]) r_min=res[level-1];
    }else{
        for(int i=0;i<4;++i){
            if((calcs[i]-visited[i])>0){
                res[level] = simple_calc(i,res[level-1],nums[level]);
                ++visited[i];
                sort_calcs(res, level+1);
                --visited[i];
            }
        }
    }
}
int main(){
    cin >> N;    
    nums.assign(N,0);

    for(int i=0;i<N;++i){
        cin >> nums[i];
    }
    for(int j=0;j<4;++j){
        cin >> calcs[j];
    }
    int res[MAX];
    res[0]=nums[0];
    
    sort_calcs(res, 1);
    cout << r_max << '\n';
    cout << r_min;
    
}