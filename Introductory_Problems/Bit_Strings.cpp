#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

int main()
{
    long long int n;
    cin >> n;
    long long int ans = 1;

    for (long long int i = 1; i <= n; i++)
    {
        ans = (2*ans) % MOD;
    }
    
    cout << ans;
    return 0;
}