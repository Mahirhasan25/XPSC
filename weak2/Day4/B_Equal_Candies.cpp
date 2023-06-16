/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    int mn = INT_MAX;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        mn = min(mn, v[i]);
    }
    long long int sum = 0;
    for(int i = 0; i < n; i++){
        sum += (v[i] - mn);
    }
    cout << sum << '\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}