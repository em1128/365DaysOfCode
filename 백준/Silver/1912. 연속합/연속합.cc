#include <iostream>
#include <vector>
#define MAX 100000
using namespace std;
//https://luv-n-interest.tistory.com/919
int N;

int main(){
    ios::sync_with_stdio(false);
    cin.tie();
    cin >> N;
    vector<int> nums;
    nums.assign(N,0);
    for(int i=0;i<N;++i){
        cin >> nums[i];
    }
    int sum;
    int pre_sum=0;
    int max=-1001;
    for(int i=0;i<N;++i){
        if(nums[i]>(pre_sum+nums[i])) {
            sum=nums[i];
        }
        else {
            sum=pre_sum+nums[i];
        }
        if(max<=sum) max=sum;
        pre_sum=sum;
    }
    cout << max;
}