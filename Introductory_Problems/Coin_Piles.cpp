#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin >> t;

    for (long long i = 0; i < t; i++){
        long long int a, b;
        cin >> a >> b;

        long long int sum = a + b;

        if (sum % 3){
            cout << "NO" << endl;
        }
        else{
            long long int MAX = max(a,b);
            long long int MIN = min(a,b);

            if (2*MIN >= MAX){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            } 
        }
    }
}