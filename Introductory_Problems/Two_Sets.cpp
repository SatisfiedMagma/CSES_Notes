#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin >> n;

    if (n % 4 == 0){
        cout << "YES" << endl; 
        cout << n/2 << endl; 
       
        //Gaussian Pairing ;)
        for (long long i = 1; i <= n/4; i++){
            cout << i << " " << n-i+1 << " "; 
        }

        cout << endl << n/2 << endl;

        for (long long j = n/4+1; j <= n/2; j++){
            cout << j << " " << n-j+1 << " ";
        }
    }
    else if(n % 4 == 3){
        cout << "YES" << endl;
        cout << n/2 + 1 << endl;

        //Recursive, kinda
        cout << "1 " << "2 ";
        for (long long int i = 4; i <=(n+3)/4 + 2; i++){
            cout << i << " " << n-i+4 << " ";
        }

        cout << endl << n/2 << endl;
        cout << 3 << " ";

        for (long long j = (n+3)/4+3; j <= (n+3)/2; j++){
            cout << j << " " << n-j+4 << " ";
        }
    }
    else{
        cout << "NO";
    }
}