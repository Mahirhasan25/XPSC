/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
#define ll long long int
#define vpair vector<pair<ll, ll>>
#define PI 3.14159265359
#define cyes cout << "YES" << '\n'
#define cno cout << "NO" << '\n'
#define print(x) cout << x << '\n'
#define minus cout << "-1" << '\n'
#define pub push_back
#define pob pop_back
#define rep(x, y) for(int i = x; i < y; i++)
#define all(x) (x).begin(),(x).end()
#define fast ios_base::sync_with_stdio(false);\
    cin.tie(NULL);
using namespace std;

void solve(){
    int n, q; cin >> n >> q;
    vector<ll> pre(n+1);
    for(int i = 1; i <= n; i++){
        int in; cin >> in;
        pre[i] = pre[i - 1] + in;
    }
    while(q--){
        ll l, r, k; cin >> l >> r >> k;
        ll sum = pre[l - 1] + (r - l + 1) * k + (pre[n] - pre[r]);
        if(sum & 1) cyes;
        else cno;
    }
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}