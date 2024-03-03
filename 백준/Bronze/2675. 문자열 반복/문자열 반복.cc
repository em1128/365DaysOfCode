#include <iostream>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    for(int i=0;i<T;i++){
        int R;
        string S;
        cin >> R >> S;
        string result;
        for(int index=0;index<S.length();index++){
            result.assign(R, S[index]);
            cout << result;
        }
        cout << '\n';
    }
}
