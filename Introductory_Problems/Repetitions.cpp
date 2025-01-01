#include<bits/stdc++.h>
using namespace std;

int main(){
    string input;
    getline(cin, input);
    int ans = 0;
    int m = 1;

    for (size_t i=0; i<input.size(); i++){ //god knows what is size_t
        if (i+1 < input.size() && input[i] == input[i+1]){
            m += 1;
        }
        else{ 
            if (m > ans){
                ans = m;
            }
            m = 1;
        } 
    }
    cout << ans;
    return 0;
}