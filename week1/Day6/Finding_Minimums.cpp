#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(auto &i : v) cin >> i;
    int i = 0, j = 0, mn = 1e9;
    while(j < n){
        mn = min(mn, v[j]);
        if(j < i + k - 1 and j < n - 1) j++;
        else{
            cout << mn << ' ';
            mn = 1e9;
            j++;
            i = j;
        }
    }
}