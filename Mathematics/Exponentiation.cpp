#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

long long int fast_expo_log(long long int a, long long int N)
{
    if (N == 0){
        return 1;
    }
    else if (N == 1){
        return a % MOD;
    }
    else{
        long long int R = fast_expo_log(a, N / 2);
        if (N % 2 == 0)
        {
            return (R * R) % MOD;
        }

        return (((R*R) % MOD) * a) % MOD;
    }
}

int main()
{
    long long int n;
    cin >> n;

    for (long long int i = 0; i < n; i++)
    {
        long long int a, b;
        cin >> a >> b;

        long long int ans = 1;

        if (a == 0)
        {
            if (b != 0)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << ans << endl; // its 1 initially, so fine.
            }
        }
        else
        {
            cout << fast_expo_log(a, b) << endl;
        }
    }

    return 0;
}