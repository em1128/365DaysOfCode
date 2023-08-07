#include <iostream>
#include <cstring>
#define MAX 1001
using namespace std;
int cnt;
int recursion(const char *s, int l, int r){
    ++cnt;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int T;
    cin >> T;

    char input[MAX];
    for(int i=0;i<T;++i){
        cnt=0;
        cin >> input;
        cout << isPalindrome(input) << ' ' << cnt << '\n';
    }
}