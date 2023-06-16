/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;
    cin >> n;
    ll mn = INT_MAX;
    vector<ll> can(n);
    for(int i = 0; i < n; i++){
        cin >> can[i];
        mn = min(mn, can[i]);
    }
    ll sum = 0;
    for(int i = 0; i < n; i++){
        sum += can[i] - mn;
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