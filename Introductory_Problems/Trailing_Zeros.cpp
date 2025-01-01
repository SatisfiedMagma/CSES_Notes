#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    
    long long int ans = 0;
    long long int i = 1;

    while (n/pow(5,i)){
        ans += n/pow(5,i);
        i++;
    }

    cout << ans;
    return 0;
}