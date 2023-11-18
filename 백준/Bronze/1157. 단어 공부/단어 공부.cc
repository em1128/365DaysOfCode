#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string input;
    cin >> input;
    for (int i = 0; i < input.length(); i++) {
        if (islower(input[i])) {
            input[i] = toupper(input[i]);
        }
    }

    vector<char>word(input.begin(), input.end());
    char alp;
    int max_dup = 0;
    map<char,int> dup;
    for (int i = 0; i < word.size(); i++) {
        
        alp = word.at(i);
        dup[alp]++;
        if (max_dup < dup[alp]) {
            max_dup = dup[alp];
        }
        
    }

    int same = 0;
    char answer='?';
    for (auto it = dup.begin(); it != dup.end(); it++) {
        if (it->second == max_dup) {
            answer = it->first;
            same++;
        }
    }
    if (same > 1) answer = '?';
    cout << answer;

}