#include <iostream>
#include <vector>

//https://wooono.tistory.com/302
#define MAX 14
using namespace std;

int N;
int cnt=0;
int queen_loc[MAX];
bool checkQueen(int row){

    for(int i=0;i<row;++i){
        if(queen_loc[row]==queen_loc[i] || (row-i)==(queen_loc[row]-queen_loc[i]) 
           || (row-i)==-(queen_loc[row]-queen_loc[i])) {// 세로,대각선1,대각선2
                return false;
        }
    }
    return true;
}
void placeQueen(int row){
    if(row==N){
        ++cnt;
    }else {
        for(int col=0; col<N;col++) {
            
            queen_loc[row]=col;
            if(checkQueen(row)){
                placeQueen(row+1);
            }
        }
    }
}

int main(){
    cin >> N;
    
    placeQueen(0);
    cout << cnt;
    return 0;

}