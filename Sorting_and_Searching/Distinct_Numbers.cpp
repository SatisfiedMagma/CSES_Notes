#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n; 
    cin >> n;
    int size = 0;
    vector<int> nos; 
 
    for (int k=0; k<n; k++){
        int inp; 
        cin >> inp;
 
        nos.push_back(inp);
    }
 
    sort(nos.begin(), nos.end());
 
    for (int i = 0; i < n; i++){
        if (nos[i] != nos[i+1]){
            size += 1;
        }
    }
    cout << size << endl;
    // note to self, i think when i = n-1, then nos[n-1] = nos[n] is false since nos[n] is kinda blank? so ideally i should be putting like cout << size + 1, but this cpp hack(?) does the job
    // and, you can just add in if condition to check i+1 < n, it would be fine then
    return 0;
}