#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t; cin >> t;
    
    for (long long i = 0; i < t; i++){
        long long row, column;
        cin >> row; cin >> column;

        if (row >= column){
            if (row % 2 == 0){
                cout << row*row - column + 1 << endl;
            }else{
                cout << (row-1)*(row-1) + column << endl;
            }
        }else{
            if (column % 2 == 1){
                cout << column*column - row + 1 << endl;
            }
            else{
                cout << (column-1)*(column-1) + row << endl;
            }
        }
    }

    return 0;
}