#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll l, r;
    cin >> l >> r;
    ll start = min(l, r);
    ll end = max(l, r);
    cout << ((end + 1)*end)/2 - ((start - 1)*start/2) << '\n';
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}