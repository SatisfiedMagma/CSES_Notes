#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

long long int fast_expo_log(long long int a, long long int N, long long int mod){
    if (N == 0){
        return 1;
    }
    else if (N == 1){
        return a % mod;
    }
    else{
        long long int R = fast_expo_log(a, N / 2, mod);
        if (N % 2 == 0)
        {
            return (R * R) % mod;
        }

        return (((R*R) % mod) * a) % mod;
    }
}


int main(){
    long long int t;
    cin >> t;

    for (long long int x = 0; x < t; x++){
        long long int a,b,c;
        cin >> a >> b >> c;

        long long int b_c = fast_expo_log(b,c,MOD-1);
        cout << fast_expo_log(a, b_c, MOD) << endl;
    }
    return 0;
}